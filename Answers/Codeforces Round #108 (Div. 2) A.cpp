#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cin>>n>>m;
int maxarr [m]={0};
map <int,int> mp;
char degree[n][m];
for (int i=0;i<n;++i){
	for (int j=0;j<m;++j){
		cin>>degree[i][j];
		maxarr[j]=max(maxarr[j],degree[i][j]-'0');
	}
}
for (int i=0;i<n;++i){
	for (int j=0;j<m;++j){
		if(degree[i][j]-'0'==maxarr[j])
			mp[i]=1;
	}
	}
int sum=0;
for (int i=0;i<n;++i)
	sum+=mp[i];
cout<<sum<<endl;

	return 0;
}