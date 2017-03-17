#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> v(n);
for (int i=0;i<n;++i)
	cin>>v[i];
int minelemtn=*min_element(v.begin(),v.end());
int pos=min_element(v.begin(),v.end())-v.begin();
v.erase(min_element(v.begin(),v.end()));
int minelemtn2=*min_element(v.begin(),v.end());
if(minelemtn==minelemtn2 &&(int)v.size()!=0)
cout<<"Still Rozdil"<<endl;
else
cout<<pos+1<<endl;
return 0;
}