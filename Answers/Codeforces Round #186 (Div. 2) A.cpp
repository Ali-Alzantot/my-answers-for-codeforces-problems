#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
string s1=s;
s1.erase(s1.length()-1);
string s2=s;
s2.erase(s2.length()-2,1);
int big=0;
if (atoi(&s1[0])>=atoi(&s2[0]))
	big=atoi(&s1[0]);
else
	big=atoi(&s2[0]);
if (big>=atoi(&s[0]))
	cout<<big<<endl;
else
cout<<atoi(&s[0])<<endl;
	return 0;
}