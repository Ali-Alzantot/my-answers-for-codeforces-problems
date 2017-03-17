#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
vector <int> v(n);
for (int i=0;i<n;++i)
	cin>>v[i];
int mn=*(min_element(v.begin(),v.end()));
int num=0;
num+=max_element(v.begin(),v.end()) - v.begin();
int pos=0;
for (int i=0;i<n;++i)
	if(v[i]==mn)
		pos=i;
if((max_element(v.begin(),v.end()) - v.begin())> pos)
	num+=n-2-pos;
else if((max_element(v.begin(),v.end()) - v.begin())< pos)
	num+=n-1-pos;
cout<<num<<endl;
	return 0;
}