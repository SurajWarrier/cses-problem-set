#include<bits/stdc++.h>
using namespace std;

#define lli long long int
int main() {
	lli n;
	cin>>n;
	lli k[n];
	map<lli,lli> m;
	lli ans=0;
	for(lli i=0;i<n;i++) {
		cin>>k[i];
	}
	for(lli i=0,j=0;i<n;i++) {
		while(j<n&&m[k[j]]<1) {
			++m[k[j]];
			++j;
		}
		ans=max(ans,j-i);
		--m[k[i]];
	}
	cout<<ans;
	return 0;
}