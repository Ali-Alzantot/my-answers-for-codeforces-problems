#include <bits/stdc++.h>
using namespace std;
int main() {
int s,n;
cin>>s>>n;
int arrayx[n];
int arrayy[n];
for (int i=0;i<n;++i)
	cin>>arrayx[i]>>arrayy[i];
int num=0;
int x,y,pos;
for (int i=0;i<n;++i){
	x=0; y=-1; pos =-1;
	for (int j=0;j<n;++j){
		if (arrayx[j]<s && arrayy[j]>y){
			x=arrayx[j];
			y=arrayy[j];
			pos=j;
		}
	}
	if(x==0 && y==-1 && pos ==-1)
		break;
	else
	{
		arrayx[pos]=100000;
		arrayy[pos]=-100000;
		s+=y;
		num++;
	}
}
if( num == n)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	return 0;
}