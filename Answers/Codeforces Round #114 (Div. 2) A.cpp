#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
cin>>n>>x>>y;
int ans=ceil(n*y/100.0);
if(ans>x)
cout<<ans-x<<endl;
else
cout<<"0"<<endl;
return 0;
}