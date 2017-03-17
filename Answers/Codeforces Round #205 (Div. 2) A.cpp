#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int>up(n);
vector <int>down(n);
for (int i=0;i<n;++i)
	cin>>up[i]>>down[i];
if(accumulate(up.begin(),up.end(),0)%2==0 && accumulate(down.begin(),down.end(),0)%2==0)
cout<<"0"<<endl;
else{
int count=0;
int temp;
for (int i=0;i<n;++i){
temp=up[i];
up[i]=down[i];
down[i]=temp;
count=1;
if(accumulate(up.begin(),up.end(),0)%2==0 && accumulate(down.begin(),down.end(),0)%2==0){
cout<<count<<endl;
break;
}
else{
	temp=up[i];
	up[i]=down[i];
	down[i]=temp;
	count=0;
	continue;
}
}
if(count==0)
cout<<"-1"<<endl;
}

	return 0;
}