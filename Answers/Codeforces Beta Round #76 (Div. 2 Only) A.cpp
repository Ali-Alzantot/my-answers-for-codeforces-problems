#include <bits/stdc++.h>
using namespace std;
int main() {
string s,in;
cin>>s;
map <string,int>mp;
for (int i=0;i<10;++i){
    cin>>in;
    mp[in]=i;
}
for (int j=0;j<s.length();j+=10){
    cout<<mp[s.substr(j,10)];
}
    return 0;
}