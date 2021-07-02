#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0, count = 0;
	char l = 'A';
	for(char ch : s) {
		if(ch==l) {
			++count;
			ans = max(ans, count);
		}
		else {
			l = ch;
			count = 1;
		}
	}
	cout << ans;
	return 0;
}