#include <bits/stdc++.h>
using namespace std;
int main() {
int num;
cin>>num;
int cnt=0;
int acc=0;
vector <int> v (num);
for (int i=0;i<(int)v.size();++i){
    cin>>v[i];
}
sort(v.rbegin(),v.rend());
for (int j=0;j<num;++j){
    acc+=v[j];
    cnt++;
    if(acc>accumulate(v.begin()+1+j,v.end(),0))
        break;
}
cout<<cnt<<endl;
    return 0;
}