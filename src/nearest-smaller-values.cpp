#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn=2e5;
int n;
ll a;
stack<array<ll,2>> s;
int main() {
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a;
		while(!s.empty()&&(s.top())[0]>=a) {
			s.pop();
		}
		if(!s.empty()&&(s.top())[0]<a)
			cout<<(s.top())[1]<<" ";
		else
			cout<<0<<" ";
		s.push({a,i+1});
	}
	return 0;
}