#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll n,x;
	cin>>n>>x;
	ll a[n],dp[x+1];
	//3 11
	// 1 5 7
	dp[0]=0;
	for(ll i=0;i<n;++i) 
		cin>>a[i];
	
	for(ll i=1;i<x+1;i++) {
		dp[i]=1e9;
		for(ll j=0;j<n;j++) {
			if(a[j]<=i) 
				dp[i]=min(dp[i],dp[i-a[j]]+1);
		}
	}
	if(dp[x]>=1e9)
		cout<<-1;
	else
		cout<<dp[x];
	return 0;
}