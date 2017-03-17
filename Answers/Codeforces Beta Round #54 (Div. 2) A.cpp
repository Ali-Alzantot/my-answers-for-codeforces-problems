#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
bool chk1=false,chk2=false,chk3=false,chk4=false,chk5=false;
for (int i=0;i<s.length();++i){
	if(s[i]=='h'&&!chk1){
		chk1=true;
		continue;
	}
	if(s[i]=='e'&&!chk2&&chk1){
			chk2=true;
			continue;
	}
	if(s[i]=='l'&&!chk3&&chk2){
				chk3=true;
				continue;
	}
	if(s[i]=='l'&&!chk4&&chk3){
			  chk4=true;
				continue;
	}
	if(s[i]=='o'&&!chk5&&chk4){
				  chk5=true;
				  break;
	}
}
if(chk5)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	return 0;
}