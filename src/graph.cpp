#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> g[n];
	for(int i=0;i<n;i++) {
		for(int &v : g[i]) cin>>v;
	}
}