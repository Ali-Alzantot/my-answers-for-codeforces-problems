#include <bits/stdc++.h>
using namespace std;
int main() {
string word;
cin>>word;
bool chk=false;
for(int i=0;i<word.length();++i){
    if(word[i]=='Q'||word[i]=='H'||word[i]=='9'){
        chk=true;
        break;
    }
}
if(chk)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

    return 0;
}