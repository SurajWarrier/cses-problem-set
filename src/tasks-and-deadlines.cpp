#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 2e5;
int n;
array<int,2> a[mxn];
int main() {
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i][0]>>a[i][1];
	}
	sort(a,a+n);
	ll s=0,st=0;
	for(int i=0;i<n;i++) {
		st+=a[i][0];
		s+=a[i][1]-st;
	}
	cout<<s;
	return 0;
}