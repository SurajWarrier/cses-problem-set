#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	lli n,k;
	cin>>n;
	vector<lli>v; 
	for(int i=0;i<n;i++) {
		cin>>k;
		lli p = upper_bound(v.begin(),v.end(),k)-v.begin();
		if(p<v.size()) 
			v[p]=k;
		else
			v.push_back(k);
	}
	cout<<v.size();
	return 0;
}
	