#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
string s;
cin>>s;
if(n<26)
cout<<"NO"<<endl;
else{
int num=0;
char array[27];
for (char i='a';i<='z';++i)
	array[i-'a']=i;
for (int i=0;i<26;++i){
	for (int j=0;j<s.length();++j){
		if(toupper(array[i])==s[j] ||array[i]==s[j] ){
			num++;
			break;
		}

	}
}
if(num==26)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
	return 0;
}