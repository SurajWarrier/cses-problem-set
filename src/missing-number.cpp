#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main() {
	ll n, sum = 0;
	cin >> n;
	for(int i = 1; i < n; i++) {
		int num;
		cin >> num;
		sum += num;
	}
	cout << n*(n+1)/2 - sum;
}