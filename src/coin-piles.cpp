#include <bits/stdc++.h>
using namespace std;

#define lli long long int
int main() {
	lli t;
	cin >>t;
	while(t--) {
		lli a,b;
		cin >> a >> b;
		cout << ((a+b)%3==0 && a*2>=b && b*2>=a ? "YES" : "NO") << "\n";
	}
}