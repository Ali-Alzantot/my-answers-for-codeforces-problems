#include <bits/stdc++.h>
using namespace std;
int main(){
map <int,int> mp;
mp[0]=6; mp[1]=2; mp[2]=5; mp[3]=5;
mp[4]=4; mp[5]=5; mp[6]=6; mp[7]=3;
mp[8]=7; mp[9]=6;
int a,b,x;
cin>>a>>b;
long long int num=0;
for (int i=a;i<=b;++i){
	     x=i;
	     do{
	    num+=mp[x%10];
	    x/=10;
	     }while(x!=0);
}
cout<<num<<endl;
	return 0;
}