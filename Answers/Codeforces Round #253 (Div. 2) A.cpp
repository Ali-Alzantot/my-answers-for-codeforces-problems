#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
set <char> st;
for(int i=0;i<s.length();++i)
    st.insert(s[i]);
if(st.size()<3)
    cout<<"0"<<endl;
else if(st.size()==3)
    cout<<"1"<<endl;
else
cout<<st.size()-4<<endl;
    return 0;

}