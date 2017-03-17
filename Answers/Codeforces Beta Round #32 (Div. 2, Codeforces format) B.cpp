#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
string out="";
for (int i=0;i<s.length();++i){
	if(s[i]=='-'&&s[i+1]=='-'){
		out+='2';
		i++;
	}
	else if (s[i]=='-'&&s[i+1]=='.'){
		out+='1';
		i++;
	}
	else
		out+='0';
}
cout<<out<<endl;
	return 0;
}