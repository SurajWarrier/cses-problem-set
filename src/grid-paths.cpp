#include<bits/stdc++.h>

using namespace std;

string s;
bool v[7][7];
int ans=0;

bool e(int i,int j) {
	return i>=0&&i<7&&j>=0&&j<7&&!v[i][j];
}
	
void findPaths(int i,int j, int a = 0) {
	if(i==6&&j==0) {
		if(a==48)
			++ans;
		return;
	}
	v[i][j] = 1;
	if(s[a]=='?' || s[a]=='L') {
		if(j&&!v[i][j-1])
			if(!(!e(i,j-2)&&e(i+1,j-1)&&e(i-1,j-1)))
				findPaths(i,j-1,a+1);
	}
	if(s[a]=='?' || s[a]=='R') {
		if(j<6&&!v[i][j+1])
			if(!(!e(i,j+2)&&e(i+1,j+1)&&e(i-1,j+1)))
				findPaths(i,j+1,a+1);
	}
	if(s[a]=='?' || s[a]=='U') {
		if(i&&!v[i-1][j])
			if(!(!e(i-2,j)&&e(i-1,j+1)&&e(i-1,j-1)))
				findPaths(i-1,j,a+1);
	}
	if(s[a]=='?' || s[a]=='D') {
		if(i<6&&!v[i+1][j])
			if(!(!e(i+2,j)&&e(i+1,j-1)&&e(i+1,j+1)))
				findPaths(i+1,j,a+1);
	}
	v[i][j]=0;
}
int main() {
	cin >> s;
	findPaths(0,0);
	cout << ans;
	return 0;
}