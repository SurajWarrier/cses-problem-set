#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
  
int main() {
	int n,k;
	cin>>n>>k;
	ordered_set s;
	for(int i=1;i<=n;i++) {
		s.insert(i);
	}
	int i=0;
	while(s.size()>1) {
		i=(i+k)%(int)s.size();
		cout<<*(s.find_by_order(i))<<" ";
		s.erase(*(s.find_by_order(i)));
		i%=(int)s.size();
	}
	cout<<*(s.find_by_order(0));
	return 0;
}