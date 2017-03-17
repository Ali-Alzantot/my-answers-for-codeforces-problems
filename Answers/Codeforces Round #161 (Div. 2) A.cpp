#include <bits/stdc++.h>
using namespace std;
int main() {
	int array[5][5];
	int row,col;
	for (int i=0;i<5;++i){
		for (int j=0;j<5;++j){
			cin>>array[i][j];
			if(array[i][j]==1){
				row=i;
				col=j;
			}
		}
	}
	int steps=abs(row+1-3)+abs(col+1-3);
	cout<<steps<<endl;
	return 0;
}