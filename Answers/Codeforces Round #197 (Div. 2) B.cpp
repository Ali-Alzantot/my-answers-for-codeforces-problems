#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
long long int num=0;
int pos=1;
int array[m];
for (int i=0;i<m;++i){
	cin>>array[i];
	if(array[i]>pos||array[i]==pos){
		num+=array[i]-pos;
		pos=array[i];
	}
	else{
		num+=n-pos+1;
		pos=1;
		num+=array[i]-pos;
		pos=array[i];
	}
}
cout<<num<<endl;
	return 0;
}