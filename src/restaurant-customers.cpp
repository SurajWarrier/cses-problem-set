#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b;
	set<array<int,2>> s;
	int ans=0,sum=0;
	while(n--) {
		cin>>a>>b;
		s.insert({a,1});
		s.insert({b,-1});
	}
	for(array<int,2> a : s) {
		sum+=a[1];
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
}