#include<bits/stdc++.h>
using namespace std;

#define lli long long int
int main() {
	lli n;
	cin>>n;
	lli p[n];
	lli m,ans=0;
	for(lli i=0;i<n;i++) {
		cin>>p[i];
	}
	sort(p,p+n);
	if(n&1) {
		m=p[n/2];
	}
	else {
		m=(p[n/2-1]+p[n/2])/2;
	}
	for(lli i=0;i<n;i++) {
		ans+=abs(p[i]-m);
	}
	cout<<ans;
	return 0;
}