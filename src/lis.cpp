#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	lli n,k;
	cin>>n;
	vector<lli>v; 
	for(int i=0;i<n;i++) {
		cin>>k;
		v.push_back(k);
	}
	
	if(v.size()==0) {
		cout<<0;
		return 0;
	}
	vector<lli> t(v.size(),0);
	t[0]=v[0];
	lli len=1;
	for(lli i=1;i<n;i++) {
		if(v[i]<t[0]) {
			t[0]=v[i];
		}
		else if(v[i]>t[len-1]) {
			t[len++]=v[i];
		}
		else {
			lli l=0,r=len-1;
			while(r-l>1) {
				lli m = l + (r-l)/2;
				if(t[m]>=v[i]) {
					r=m;
				}
				else {
					l=m;
				}
			}
			t[r]=v[i];
		}
	}
	cout<<len;
	return 0;
}