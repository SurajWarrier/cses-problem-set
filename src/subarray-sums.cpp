#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn=2e5;
int n;
ll x,a[mxn];
int main() {
	cin>>n>>x;
	ll s=0;
	map<ll,int> mp;
	mp[0]++;
	ll ans=0;
	for(int i=0;i<n;++i) {
		cin>>a[i];
		s+=a[i];
		ans+=mp[s-x];
		mp[s]++;
	}
	cout<<ans;
	return 0;
}