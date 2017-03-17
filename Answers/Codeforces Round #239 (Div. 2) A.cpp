#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> cashes(n);
for (int i=0;i<n;++i)
	cin>>cashes[i];
int mn=1000000000;
int item;
for (int i=0;i<n;++i){
	int total=0;
	for (int j=0;j<cashes[i];++j){
		cin>>item;
		total+=item*5;
		total+=15;
	}
	mn=min(mn,total);
}
cout<<mn<<endl;
	return 0;
}