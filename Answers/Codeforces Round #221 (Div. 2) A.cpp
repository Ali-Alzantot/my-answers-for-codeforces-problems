#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int pos=(int)s.find("^");
long long int sum=0;
for (int i=0;i<s.length();++i){
	if(i!=pos && s[i]!='='){
	sum+=(i-pos)*(s[i]-'0');
	}
}
if(sum>0)
cout<<"right"<<endl;
else if(sum<0)
cout<<"left"<<endl;
else
cout<<"balance"<<endl;
	return 0;
}