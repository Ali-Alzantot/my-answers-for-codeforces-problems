#include <bits/stdc++.h>
using namespace std;
int removezero (int num){
    string s;
    stringstream ss(s);
    ss<<num;
    s=ss.str();
    for (int i=0;i<s.length();++i){
        if(s[i]=='0'){
        s.erase(i,1);
        i--;
        }
    }
    int numwithoutzero;
    stringstream mm(s);
    mm>>numwithoutzero;
    return numwithoutzero;

}
int tonum (string m){
    stringstream mm(m);
    int x;
    mm>>x;
    return x;
}
int main() {
int x,y;
cin>>x>>y;
int z=x+y;
int zwithoutzero=removezero(x)+removezero(y);
if(removezero(z)==zwithoutzero)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
    return 0;
}