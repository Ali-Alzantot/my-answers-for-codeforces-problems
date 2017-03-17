#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
int cnt=count(s.begin(),s.end(),'4');
cnt+=count(s.begin(),s.end(),'7');
if(cnt== 7 || cnt == 4)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}