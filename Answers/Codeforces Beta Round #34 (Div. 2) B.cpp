#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cin>>n>>m;
vector <int> v(n);
for (int i=0;i<n;++i)
	cin>>v[i];
sort(v.begin(),v.end());
int sum=0;
for (int j=0;j<m;++j){
	if(v[j]<=0)
	sum+=abs(v[j]);
	
}
cout<<sum<<endl;
	return 0;
}