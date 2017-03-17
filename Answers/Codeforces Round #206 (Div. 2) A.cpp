#include<bits/stdc++.h>
using namespace std;
int main(){
int k,d;
cin>>k>>d;
if(d==0 && k==1)
cout<<"0"<<endl;
else if(d==0 && k>1)
cout<<"No solution"<<endl;
else{
string s="";
s+=(char)(48+d);
for (int i=1;i<k;++i)
	s+='0';
cout<<s<<endl;
}
    return 0;
}