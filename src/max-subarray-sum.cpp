#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	lli n;
	cin >> n;
	lli a[n];
	for(lli i=0;i<n;i++) {
		cin>>a[i];
	}
	lli s=a[0],ans=a[0];
	for(lli i=1;i<n;i++) {
		s=max(a[i],s+a[i]);
		ans=max(ans,s);
	}
	cout<<ans;
	return 0;
}