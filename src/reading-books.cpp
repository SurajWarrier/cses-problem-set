#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mxn=2e5;
int n;
ll t[mxn];
int main() {
	cin>>n;
	ll s=0;
	for(int i=0;i<n;i++) {
		cin>>t[i];
		s+=t[i];
	}
	sort(t,t+n);
	ll hi=t[n-1];
	ll c=s-hi;
	if(hi>=c)
		cout<<2*hi;
	else	
		cout<<hi+c;
	return 0;
}