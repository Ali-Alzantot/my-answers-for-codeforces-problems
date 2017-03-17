#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector <int> v (n);
for (int i=0;i<n;++i)
	cin>>v[i];
int n1=count(v.begin(),v.end(),1);
int n2=count(v.begin(),v.end(),2);
int n3=count(v.begin(),v.end(),3);
int w=min(n1,n2);
w=min(w,n3);
cout<<w<<endl;
while (w--){
cout<<find(v.begin(),v.end(),1)-v.begin()+1<<" ";
v[find(v.begin(),v.end(),1)-v.begin()]=-1;
cout<<find(v.begin(),v.end(),2)-v.begin()+1<<" ";
v[find(v.begin(),v.end(),2)-v.begin()]=-1;
cout<<find(v.begin(),v.end(),3)-v.begin()+1<<endl;
v[find(v.begin(),v.end(),3)-v.begin()]=-1;
}
return 0;
}