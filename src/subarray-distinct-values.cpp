#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn=2e5;
int n;
ll k,a[mxn];
int main() {
	cin>>n>>k;
	vector<ll> v;
	ll ans=0;
	for(int i=0;i<n;++i) {
		cin>>a[i];
		if(find(v.begin(),v.end(),a[i])==v.end()) {
			if(v.size()<k) {
				v.push_back(a[i]);
				ans+=v.size();
			}
			else {
				ll d=v.front();
				v.erase(find(v.begin(),v.end(),d));
				v.push_back(a[i]);
				ans+=v.size();
			}
			
		}
		else {
			//ll d=v.front();
			//v.erase(find(v.begin(),v.end(),d));
			v.push_back(a[i]);
			ans+=v.size();
		}
	}
	cout<<ans;
	return 0;
}