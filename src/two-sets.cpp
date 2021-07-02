#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
	ll n;
	cin >> n;
	ll sum=n*(n+1)/2;
	if(sum%2) {
		cout << "NO";
		return 0;
	}
	cout << "YES" <<endl;
	vector<int> v1,v2;
	if(n%4==0) {
		for(int i=0;i<n/4;i++) {
		v1.push_back(4*i+1);
		v1.push_back(4*i+4);
		v2.push_back(4*i+2);
		v2.push_back(4*i+3);
		}
	}
	if(n%4==3) {
		ll psum=0;
		for(int i=0;i<n/2;i++) {	
			if(psum<sum/2) {
				psum+=n;
				v1.push_back(i+1);
				v1.push_back(n-1-i);	
			}
			else {
				v2.push_back(i+1);
				v2.push_back(n-1-i);
			}
		}
		v2.push_back(n);
	}
	cout << v1.size() <<endl;
	for(int i=0;i<v1.size();i++) {
		cout << v1[i] << " ";
	}
	cout << "\n";
	cout << v2.size() <<endl;
	for(int i=0;i<v2.size();i++) {
		cout << v2[i] << " ";
	}

}