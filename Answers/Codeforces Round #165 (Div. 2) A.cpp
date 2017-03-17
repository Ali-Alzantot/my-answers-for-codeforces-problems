#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
double angle,x;
bool chk;
cin>>t;
while(t--){
chk=false;
cin>>angle;
for (int i=3;i<1000000;++i){
	x=((double)(i-2)*180/(double)i);
	if(angle==x){
		chk=true;
		break;
	}
}
if(chk)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
	return 0;
}