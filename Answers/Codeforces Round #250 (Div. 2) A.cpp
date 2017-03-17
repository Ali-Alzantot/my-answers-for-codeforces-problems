#include <bits/stdc++.h>
using namespace std;
int main(){
string A,B,C,D;
cin>>A>>B>>C>>D;
int a=(int)A.length();
int b=(int)B.length();
int c=(int)C.length();
int d=(int)D.length();
a-=2;
b-=2;
c-=2;
d-=2;
string s="";
if((a<=b/2 && a<=c/2 && a<=d/2 )|| (a>=b*2 && a>=c*2 && a>=d*2))
	s+='A';
if((b<=a/2 && b<=c/2 && b<=d/2 )|| (b>=a*2 && b>=c*2 && b>=d*2))
	s='B';
if((c<=a/2 && c<=b/2 && c<=d/2 )|| (c>=a*2 && c>=b*2 && c>=d*2))
	s+='C';
if((d<=a/2 && d<=b/2 && d<=c/2 )|| (d>=a*2 && d>=b*2 && d>=c*2))
	s+='D';
if(s.length()==1)
	cout<<s<<endl;
else
	cout<<"C"<<endl;


return 0;
}