#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
	lli n;
	cin >> n;
	lli ans=0;
	set<lli> s;
	for(int i=0;i<n;i++) {
		lli num;
		cin >>num;
		s.insert(num);
	}
	cout<< s.size();
	return 0;
}