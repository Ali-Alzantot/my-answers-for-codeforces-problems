#include <bits/stdc++.h>
using namespace std;
int main(){
int k;
cin>>k;
k*=2;
vector <char> array(16);
for (int i=0;i<16;++i)
	cin>>array[i];
bool chk=true;
for (int i=0;i<16;++i){
if(count(array.begin(),array.end(),array[i])>k && array[i]!='.'){
	chk=false;
	break;
}
}
if(chk)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
	return 0;
}