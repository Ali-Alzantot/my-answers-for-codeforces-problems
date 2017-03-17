#include <bits/stdc++.h>
using namespace std;
int main() {
string s1,s2,s3;
cin>>s1>>s2;
s3=s1;
reverse(s3.begin(),s3.end());
if(s3==s2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
	return 0;
}