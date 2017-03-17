#include <bits/stdc++.h>
using namespace std;
int main() {
int n,num;
cin>>n;
map <int,int> mp;
for (int i=1;i<=n;++i){
    cin>>num;
    mp[num]=i;
}
for (int j=1;j<=n;++j)
    cout<<mp[j]<<" ";
    return 0;
}