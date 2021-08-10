#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7,mxn=100,mxx=1e6;
int main() {
	ll n,x;
	cin>>n>>x;
	ll a[mxn],dp[mxx+1]={0};
	// 3 11
	// 1 5 7 -> 1 5 5 -> 
	for(ll i=0;i<n;i++) {
		cin>>a[i];
		dp[a[i]]=1;
	}
	for(ll i=1;i<x+1;i++) {
		for(ll j=0;j<n;j++) {
			if(a[j]<=i) {
				dp[i] = (dp[i]+dp[i-a[j]])%M;
			}
		}
	}
	cout<<dp[x];
	return 0;
}