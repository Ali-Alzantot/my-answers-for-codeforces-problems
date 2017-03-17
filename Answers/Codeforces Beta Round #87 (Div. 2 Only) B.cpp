#include <bits/stdc++.h>
using namespace std;
int n,m;
int dir1[4]={-1,0,1,0};
int dir2[4]={0,-1,0,1};
bool valid (int x,int y){
	return x>=0 && x<n && y>=0 && y<m ;
}
int main() {
cin>>n>>m;
char array [n][m];
bool eat [n][m];
for (int i=0;i<n;++i){
	for (int j=0;j<m;++j){
		cin>>array[i][j];
		eat[i][j]=true;
	}
}
int num=0;
for (int i=0;i<n;++i){
	for (int j=0;j<m;++j){
		if(array[i][j]=='P'){
		for (int k=0;k<4;++k){
			if(valid (i+dir1[k],j+dir2[k])){
				if(array[i+dir1[k]][j+dir2[k]]=='W'&&eat[i+dir1[k]][j+dir2[k]]){
					num++;
					eat[i+dir1[k]][j+dir2[k]]=false;
				}
			}
		}
		}
	}
}
cout<<num<<endl;
	return 0;
}