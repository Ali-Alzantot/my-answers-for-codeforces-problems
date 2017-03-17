#include <bits/stdc++.h>
using namespace std;
string cnvrt(string s){
long long int x=0;
long long int i=0;
for (;i<s.length();++i){
x+=s[i]-'0';
}
string result;
stringstream ss(result);
ss<<x;
result=ss.str();
return result;
}
int main(){
string s;
cin>>s;
long long int cnt=0;
while (s.length()>1){
s=cnvrt(s);
cnt++;
}
cout<<cnt<<endl;
	return 0;
}