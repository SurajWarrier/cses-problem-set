#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int n,m;
vector<int> g[mxn],ans;
bool v[mxn];


void dfs(int s) {
	v[s]=1;
	for(int u : g[s]) {
		if(!v[u])
			dfs(u);
	}
	return;
}
int main() {
	cin>>n>>m;
	for(int i=0,a,b;i<m;i++) {
		cin>>a>>b;
		--a,--b;
		g[a].push_back(b);
		g[b].push_back(a);
	};
	for(int i=0;i<n;i++) {
		if(!v[i]) {
			ans.push_back(i);
			dfs(i);
		}
	}
	cout<<ans.size() - 1<<endl;
	for(int i=0;i<ans.size()-1;i++) 
		cout<<ans[i]+1<<" "<<ans[i+1]+1<<endl;
}