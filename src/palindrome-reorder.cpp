#include <bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin >> s;
	map<char,int> m;
	for(int i = 0;i<s.length();i++) {
		m[s[i]]++;
	}
	int oc=0;
	char ochr;
	for(auto itr=m.begin();itr!=m.end();itr++) {
		if(itr->second%2) {
			oc++;
			ochr=itr->first;
		}
	}
	if(oc>1) {
		cout << "NO SOLUTION";
		return 0;
	}
	string fh="", lh="";
	for(auto itr:m) {
		string str(itr.second/2, itr.first);
		fh = fh + str;
		lh = str+lh;
	}
	if(oc==1) {
		cout<<fh+ochr+lh;
	}
	else {
		cout<<fh+lh;
	}
}