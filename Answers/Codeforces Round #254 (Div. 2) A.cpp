#include <bits/stdc++.h>
using namespace std;
int n,m;
char in [100][100];
char out [100][100];
int main(){
cin>>n>>m;
for (int i=0;i<n;++i)
	for(int j=0;j<m;++j)
		cin>>in[i][j];
for (int i=0;i<n;++i){
	for(int j=0;j<m;++j){
		if(in[i][j]=='-')
			out[i][j]='-';
		else{
       if(i%2==0 && j%2==0)
    	   out[i][j]='B';
       else if(i%2==0 && j%2!=0)
    	   out[i][j]='W';
       else if(i%2!=0 && j%2==0)
           	   out[i][j]='W';
       else if(i%2!=0 && j%2!=0)
               out[i][j]='B';
		}
	}
}
for (int i=0;i<n;++i){
	for(int j=0;j<m;++j){
		cout<<out[i][j];
}
	cout<<endl;
}
	return 0;
}