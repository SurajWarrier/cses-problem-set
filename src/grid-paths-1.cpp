#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int main () {
	int n;
	cin>>n;
	char a[n][n];
	int dp[n+1][n+1];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n+1;i++) {
		for(int j=0;j<n+1;j++) {
			dp[i][j] = 0;
		}
	}
	if(a[0][0]=='*' || a[n-1][n-1]=='*') {
		cout<<0;
		return 0;
	}
	dp[1][1]=1;
	for(int i=1;i<n+1;i++) {
		for(int j=1;j<n+1;j++) {
			if (a[i-1][j-1]=='.')
				dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i][j-1])%M;
		}	
	}
	cout<<dp[n][n];
	return 0;
}