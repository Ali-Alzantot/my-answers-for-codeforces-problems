#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int num=0;
int array[11];
for (int i=0;i<11;++i){
	if(i==9)
	array[i]=15;
	else
	array[i]=4;
	if(i+11==n)
	num+=array[i];
}
cout<<num<<endl;
	return 0;
}