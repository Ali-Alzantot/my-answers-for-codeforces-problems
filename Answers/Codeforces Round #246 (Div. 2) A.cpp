#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k,x,xx;
cin>>n>>k;
int cnt=0;
for (int i=0;i<n;++i){
	cin>>x;
	xx=5-x;
	if(xx>=k)
	cnt++;
}
cout<<cnt/3<<endl;
	return 0;
}