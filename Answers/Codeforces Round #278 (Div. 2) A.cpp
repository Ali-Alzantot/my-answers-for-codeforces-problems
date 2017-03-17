#include <bits/stdc++.h>
using namespace std;
int main(){
long long int x;
cin>>x;
long long int cnt=0;
string s;
while (true){
x++;
cnt++;
stringstream ss(s);
ss<<x;
s=ss.str();
if((int)s.find('8')!=-1)
	break;
}
cout<<cnt<<endl;
	return 0;
}