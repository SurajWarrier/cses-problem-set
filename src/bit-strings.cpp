#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
	ll n;
	cin >> n;
	int ans = 1;
	for(ll i=1;i<=n;i++) {
		ans=2*ans%((int)1e9+7);
	}
	cout << ans;	
	return 0;
}