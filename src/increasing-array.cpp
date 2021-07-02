#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ll n;
	cin >> n;
	ll ans = 0;
	int mx = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mx = max(x, mx);
		ans += mx - x;
	}
	cout << ans;
	return 0;
}