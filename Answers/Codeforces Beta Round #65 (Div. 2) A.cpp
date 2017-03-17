# include <bits/stdc++.h>
using namespace std;
string tostr(int num){
	string s="";
	stringstream ss(s);
	ss<<num;
	s=ss.str();
	return s;
}
int main(){
	int n;
	cin>>n;
	string s;
	while (n--){
	string out="";
	cin>>s;
	if(s.length()>10){
		out+=s[0];
		out+=tostr(s.length()-2);
		out+=s[s.length()-1];
		cout<<out<<endl;
	}
	else
	cout<<s<<endl;

    }

	return 0;
}