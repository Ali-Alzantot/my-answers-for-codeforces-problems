#include <bits/stdc++.h>
using namespace std;
int main(){
int n,c;
cin>>n>>c;
int array[n];
vector <int> mx(n-1);
for (int i=0;i<n;++i){
	cin>>array[i];
	if(i>=1){
	mx[i-1]=array[i-1]-array[i]-c;
	}
}
if(*(max_element(mx.begin(),mx.end()))> 0){
cout<<*(max_element(mx.begin(),mx.end()))<<endl;}
else{
cout<<"0"<<endl;
}
	return 0;
}