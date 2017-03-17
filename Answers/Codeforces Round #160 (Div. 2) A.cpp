#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k,x;
cin>>n>>k;
string array[n];
for(int i=0;i<n;++i)
	cin>>array[i];
int num=0;
for (int j=0;j<n;++j){
x=count(array[j].begin(),array[j].end(),'4');
x+=count(array[j].begin(),array[j].end(),'7');
if(x<=k)
num++;
}
cout<<num<<endl;
	return 0;
}