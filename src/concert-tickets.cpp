#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int h,t;
	multiset<int,greater<int>> s;
	while(n--) {
		cin>>h;
		s.insert(h);
	}
	while(m--) {
		cin>>t;
		auto it=s.lower_bound(t);
		if(it==s.end()) {
			cout<<-1<<endl;
		}
		else {
			cout<<*it<<endl;
			s.erase(it);
		}
	}	
	return 0;
}