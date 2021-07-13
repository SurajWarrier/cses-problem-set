#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n>>x;
	int a;
	map<int,int> m;
	for(int i=0;i<n;i++) {
		cin>>a;
		if(m.find(x-a)!=m.end()) {
			cout<<m[x-a]+1<<" "<<i+1;
			return 0;
		}
		m[a]=i;
	}
	cout<<"IMPOSSIBLE";
	return 0;
}