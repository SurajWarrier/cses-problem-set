#include <bits/stdc++.h>
using namespace std;

#define lli long long int

lli findMin(lli *p, lli cs, lli sum, lli i) {
	if(i==0)
		return abs((sum-cs)-cs);
	return min(findMin(p,cs+p[i],sum,i-1),findMin(p,cs,sum,i-1));
}

int main() {
	lli n;
	cin >> n;
	lli *p=new lli[n];
	lli sum=0;
	for(int i=0;i<n;i++) {
		cin >> p[i];
		sum+=p[i];
	}
	cout << findMin(p,0,sum,n-1) << endl;
	return 0;
	// 3 2 7 4 1 
	// 1 2 3 4 7

}