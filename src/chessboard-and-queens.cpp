#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[8];
	for(int i=0;i<8;i++) {
		cin >> s[i];
	}
	int p[8], ans=0;
	iota(p,p+8,0);
	do {
		bool ok = 1;
		for(int i=0;i<8;i++) {
			ok&=s[i][p[i]]=='.';
		}
	}while(next_permutation(p,p+8);
	return 0;
}