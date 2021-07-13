#include<bits/stdc++.h>
using namespace std;

int main() {
	int x,n;
	cin>>x>>n;
	int p[n];
	set<int> s;
	map<int,int> mp;
	s.insert(0);
	s.insert(x);
	mp[x]=1;
	for(int i=0;i<n;i++) {
		cin>>p[i];
		auto it=s.upper_bound(p[i]);
		int r=*it--;
		int l=*it;
		--mp[r-l];
		if(!mp[r-l]) 
			mp.erase(r-l);
		s.insert(p[i]);
		++mp[p[i]-l];
		++mp[r-p[i]];
		cout<< (--mp.end())->first<<" ";
	}
	return 0;
}