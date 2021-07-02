#include <bits/stdc++.h>
using namespace std;

#define lli long long int
int main() {
	lli t;
	cin >>t;
	while(t--) {
		lli a,b;
		cin >> a >> b;
		//4 4 - 2 3 - 1 1 - NO
		//6 6 - 5 4 - 3 3 
		int res = 0;
		while(res==0) {
			if (a==0 && b==0) {
				cout << "YES\n";
				res=1;
			}
			if (a==0 && b==1 || a==1 && b==0) {
				cout << "YES\n";
				res=1;
			}
			if(a==b==2) {
				cout << "N0\n";
				res=1;
			}
			if(a==b==3) {
				cout << "YES\n";
				res=1;
			}
			if(a==b*2 || b==a*2) {
				cout<< "YES\n";
				res=1;
			}
			lli c=max(a,b);
			if(c==a) {
				a-=2;
				b-=1;
			}
			else {
				a-=1;
				b-=2;
			}
		}
	}
}