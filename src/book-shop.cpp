#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n>>x;
	int h[n],s[n];
	for(int &v : h) cin>>v;
	for(int &v : s) cin>>v;
	vector<vector<int>> dp(n+1,vector<int>(x+1,0));
	for(int i=1;i<n+1;i++)  {
		for(int j=0;j<x+1;j++) {
			dp[i][j] = dp[i-1][j];
			int l = j-h[i-1];
			if(l>=0)
				dp[i][j] = max(dp[i][j],dp[i-1][l]+s[i-1]);
	    }
	}
	cout<<dp[n][x];
	return 0;
}