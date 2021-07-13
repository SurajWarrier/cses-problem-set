#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn=1000;
int n;
ll x;
ll a[mxn];
int main() {
	cin>>n>>x;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	unordered_map<ll,array<int,2>> mp;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			mp[a[i]+a[j]]={i+1,j+1};
		}
	}
	for(auto it=mp.begin();it!=mp.end();it++) {
		ll y=x-it->first;
		auto it1=mp.find(y);
		if(it1!=mp.end()) {
			cout<<(it->second)[0]<<" "<<(it->second)[1]<<" "<<(it1->second)[0]<<" "<<(it1->second)[1];
			return 0;
		}
	}
	cout<<"IMPOSSIBLE";
	return 0;
}