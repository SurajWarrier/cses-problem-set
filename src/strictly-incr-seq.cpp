#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n;
	int ans=1;
	for(int i=0;i<n;i++) {
		cin>>a;
		if(a<i)
			ans=0;
	}
	if(ans)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}