#include <bits/stdc++.h>
using namespace std;

int main() {
	int row,colum;
	cin>>row>>colum;
	char array[row][colum];
	vector <int> rowvector;
	vector <int> columvector;
	for (int i=0;i<row;++i){
		for(int j=0;j<colum;++j){
			cin>>array[i][j];
			if (array[i][j]=='*'){
				rowvector.push_back(i);
				columvector.push_back(j);
			}
		}
	}
	sort(rowvector.begin(),rowvector.end());
	sort(columvector.begin(),columvector.end());
  for (int i=rowvector.front();i<=rowvector.back();++i){
	  for (int j=columvector.front();j<=columvector.back();++j){
		
		  cout<<array[i][j];
	  }
	  cout<<endl;
  }

	return 0;
}