#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7,mxn=100,mxx=1e6;
int main() {
	int n,x;
	cin>>n>>x;
	int a[mxn];
	ll dp[mxx+1];
	dp[0]=1;
	for(int i=0;i<n;i++) 
		cin>>a[i];
	for(int j=0;j<n;j++) {
		for(int i=1;i<x+1;i++) {
			if(a[j]<=i) 
				dp[i]=(dp[i]+dp[i-a[j]])%M;
		}
	}
	cout<<dp[x];
	return 0; 
}