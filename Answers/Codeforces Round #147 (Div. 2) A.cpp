#include <bits/stdc++.h>
using namespace std;
int main() {
int n,h,m;
cin>>n;
map <pair <int,int>,int> mp;
pair <int,int> p;
for (int i=0;i<n;++i){
cin>>h>>m;
p.first=h;
p.second=m;
mp[p]++;
}
int mx=0;
vector <pair <pair <int,int>,int> >vp(mp.begin(),mp.end());
for (int i=0;i<(int)vp.size();++i){
mx=max(vp[i].second,mx);
}
cout<<mx<<endl;
	return 0;
}