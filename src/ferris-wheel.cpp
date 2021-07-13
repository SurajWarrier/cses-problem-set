#include <bits/stdc++.h>
using namespace std;

int n,x;
int main() {
	int ans=0;
	cin>>n>>x;
	int p[n];
	for(int i=0;i<n;i++) {
		cin>>p[i];
	}
	sort(p,p+n);
	for(int i=0,j=n-1;i<j;) {
		while(i<j&&p[i]+p[j]>x)
			--j;
		if(i<j&&p[i]+p[j]<=x) {
			++ans;
		}
		++i;
		--j;
	}
	cout<<n-ans;
	return 0;
}