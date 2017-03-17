#include <bits/stdc++.h>
using namespace std;
int main(){
int k;
string s;
cin>>k>>s;
bool chk=true;
string result="";
for (int i=0;i<s.length();++i){
if(count(s.begin(),s.end(),s[i])%k!=0){
	chk=false;
	break;
}
else{
if((int)result.find(s[i])==-1){
for (int l=0;l<count(s.begin(),s.end(),s[i])/k;++l)
result+=s[i];
}
}
}
if(chk){
for (int i=0;i<k;++i)
cout<<result;
cout<<endl;
}
else
cout<<"-1"<<endl;
	return 0;
}