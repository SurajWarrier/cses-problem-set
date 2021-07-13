#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;ll t;
	cin>>n>>t;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll l=1,r=1e18,ans=0;
	while(l<=r) {
		ll s=0;
		ll m=l+(r-l)/2;
		for(int i=0;i<n;i++) {
			s+=m/a[i];
			if(s>=t) {
				break;
			}
		}
		if(s>=t) {
			ans=m;
			r=m-1;
		}
		else
			l=m+1;
	}
	cout<<ans;
	return 0;
}