#include <bits/stdc++.h>
using namespace std;

#define lli long long int
int main() {
	int n;
	cin >> n;
	vector<lli> w;
	lli p;
	lli sum=0;
	for(int i=0;i<n;i++) {
		cin >> p;
		sum+=p;
		w.push_back(p);
	}
	if(n==1) {
		cout<<w[0];
		return 0;
	}
	if(n==2) {
		cout<<abs(w[0]-w[1]);
		return 0;
	}
	sort(w.begin(), w.end());
	// 3 2 7 4 1 
	// 1 2 3 4 7

}