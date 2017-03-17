#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k;
cin>>n>>k;
vector <int> v(n);
for (int i=0;i<n;++i){
	cin>>v[i];
}
for (int i=0;i<n;++i){
if (v[i]<0 && k!=0){
	v[i]=v[i]*-1;
	k--;
	continue;
}
else if(v[i]>0 && k!=0){
k=k%2;
if(k==0)
	break;
else if(k==1){
int mn=(min_element(v.begin(),v.end()))- v.begin();
v[mn]=v[mn]*-1;
k--;
break;
}
}
else if(k==0)
	break;
}
if(k!=0){
	k=k%2;
	if(k==0){
	}
	else{
int mn=(min_element(v.begin(),v.end()))- v.begin();
v[mn]=v[mn]*-1;
	}
}
cout<<accumulate(v.begin(),v.end(),0)<<endl;
	return 0;
}