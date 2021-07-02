#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
	ll k;
	cin >> k;
	for(int i=1;i<=k;++i) {
		cout << i * i * (i*i-1)/2 - 4*(i-1)*(i-2) <<endl;
	}
	return 0;
}