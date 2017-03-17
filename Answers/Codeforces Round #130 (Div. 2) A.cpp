#include <bits/stdc++.h>
using namespace std;
int main() {
string s,res="";
cin>>s;
bool chkfirst=false;
while (s.find("WUB")!=-1)
    s.replace(s.find("WUB"),3,"|");
for (int i=0;i<s.length();++i){
    if(s[i]=='|' && s[i-1]!='|' && chkfirst){
        res+=' ';
         continue;
               }
  else if(s[i]=='|')
        continue;
    else{
        res+=s[i];
        chkfirst=true;
    }
}
for (int j=res.length()-1;j>=0;j--){
    if(res[j]==' '){
        res.erase(j,1);
    }
    else
        break;
}
cout<<res<<endl;
    return 0;
}