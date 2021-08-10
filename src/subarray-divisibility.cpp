#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn=2e5;
int n;
ll a[mxn];
int main() {
	cin>>n;
	ll s=0,ans=0;
	map<ll,int> mp;
	mp[0]++;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		s=(s+a[i]%n+n)%n;
		ans+=mp[s];
		mp[s]++;
	}
	cout<<ans;
	return 0;
}