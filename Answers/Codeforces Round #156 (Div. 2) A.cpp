#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
int chest=0;
int biceps=0;
int back=0;
cin>>n;
for (int i=0;i<n;++i){
	cin>>x;
	if((i+1)%3==0)
		back+=x;
	else if((i+2)%3==0)
		biceps+=x;
	else if((i+3)%3==0)
		chest+=x;
}
if(back > biceps && back > chest)
	cout<<"back"<<endl;
else if (biceps > back && biceps > chest )
	cout<<"biceps"<<endl;
else if (chest > biceps && chest > back )
	cout<<"chest"<<endl;
else
	cout<<"unambiguous"<<endl;
	return 0;
}