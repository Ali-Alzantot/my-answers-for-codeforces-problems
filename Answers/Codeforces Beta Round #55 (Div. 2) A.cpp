#include <bits/stdc++.h>
using namespace std;
int main() {
int upp=0;
int low=0;
string s;
cin>>s;
for (int i=0;i<s.length();++i){
	if(islower(s[i]))
		low++;
	if(isupper(s[i]))
		upp++;
}
string res="";
if(low>upp || low == upp){
	for (int j=0;j<s.length();++j)
		res+=tolower(s[j]);
}
else if(upp>low){
	for (int j=0;j<s.length();++j)
			res+=toupper(s[j]);
}
cout<<res<<endl;
	return 0;
}