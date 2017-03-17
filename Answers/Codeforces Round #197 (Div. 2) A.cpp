# include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
sort(s.begin(),s.end());
s.erase(0,(int)s.find_last_of("+")+1);
string out="";
for (int i=0;i<s.length();++i){
	if (i==s.length()-1)
		out+=s[i];
	else{
	out+=s[i];
	out+='+';
	}
}
cout<<out<<endl;
	return 0;
}