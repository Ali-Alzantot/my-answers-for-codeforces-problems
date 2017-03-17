#include <bits/stdc++.h>
using namespace std;
int main(){
int n,t;
cin>>n>>t;
vector <char> v(n);
for (int i=0;i<n;++i)
	cin>>v[i];
for (int j=0;j<t;++j){
	for (int i=0;i<n-1;++i){
	if(v[i]=='B'&&v[i+1]=='G'){
	v[i]='G'; v[i+1]='B';
	i++;
	}
	}
}
for (int i=0;i<n;++i)
	cout<<v[i];
cout<<endl;
	return 0;
}