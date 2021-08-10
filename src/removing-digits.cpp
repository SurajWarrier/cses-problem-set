#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<10;i++)
		dp[i]=1;
	if(n<10) {
		cout<<dp[n];
		return 0;
	}
	for(int i=10;i<n+1;i++) {
		int m=0;
		int num=i;
		while(num>0) {
			int r=num%10;
			m=max(r,m);
			num/=10;
		}
		dp[i]=1+dp[i-m];
	}
	cout<<dp[n];
	return 0;
}