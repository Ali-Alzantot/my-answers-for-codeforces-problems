#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
for (int i=0;i<=n;++i){
	for (int m=(n-i)*2;m>0;m--){
		cout<<" ";
	}
	for (int j=0;j<=i;++j){
		if (i==0)
		cout<<j<<endl;
		else
		cout<<j<<" ";
	}
	for (int k=i-1;k>=0;k--){
	if(k==0)
	cout<<k<<endl;
	else
	cout<<k<<" ";
	}
}
for (int i=1;i<=n;++i){
for (int j=i*2;j>0;j--)
	cout<<" ";
for (int k=0;k<=n-i;++k){
	if(i==n)
	cout<<k<<endl;
	else
	cout<<k<<" ";
}
for (int m=n-i-1;m>=0;m--){
	if(m==0)
	cout<<m<<endl;
	else
	cout<<m<<" ";
}
}
	return 0;
}