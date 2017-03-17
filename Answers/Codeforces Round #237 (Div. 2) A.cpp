#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char array [n][n];
bool chk1=true;
bool chk2=true;
for (int i=0;i<n;++i){
	for (int j=0;j<n;++j){
		cin>>array[i][j];
	}
}
for (int i=0;i<n;++i){
	for (int j=0;j<n;++j){
		if (i==j || (i+j)==n-1){
			if(array[i][j]!=array[0][0])
				chk1=false;
		}
		else {
		if(array[i][j]!=array[0][1] ||array[i][j] == array[0][0])
				chk2=false;
		}
	}
	}
if(chk1 && chk2)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	return 0;
}