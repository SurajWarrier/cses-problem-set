#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	array<int,3> a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i][1]>>a[i][0];
		a[i][2]=i;
	}
	sort(a,a+n);
	set<array<int,2>> s;
	int ans[n];
	for(int i=0;i<n;i++) {
		auto it=s.lower_bound({a[i][1]});
		if(it!=s.begin()) {
			--it;
			ans[a[i][2]]=(*it)[1];
			s.erase(it);
		}
		else 
			ans[a[i][2]]=s.size();
		s.insert({a[i][0],ans[a[i][2]]});
	}
	cout<<s.size()<<endl;
	for(int i=0;i<n;i++) {
		cout<<ans[i]+1<<" ";
	}
	return 0;
}