#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
char array [n];
for (int i=0;i<n;++i)
	cin>>array[i];
string s=array;
if ((int)s.find('0')== -1)
	cout<<"-1"<<endl;
else if(count(s.begin(),s.end(),'5')<9)
	cout<<"0"<<endl;
else{
string five="555555555";
string num="";
long long int cnt1=count(s.begin(),s.end(),'5');
long long int cnt2=count(s.begin(),s.end(),'0');
long long int loop=(cnt1*5)/45;
for (int i=1;i<=loop;++i){
num+=five;
}
for (int i=1;i<=cnt2;++i)
num+='0';
cout<<num<<endl;
}
	return 0;
}