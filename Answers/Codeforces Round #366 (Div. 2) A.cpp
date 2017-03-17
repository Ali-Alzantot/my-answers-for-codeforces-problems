#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
for (int i=1;i<=n;++i){
	if(i==n && i%2 !=0){
	cout<<"I hate it"<<endl;
	}
	else if(i==n && i%2 ==0){
	cout<<"I love it"<<endl;
	}
	else {
		if(i%2 ==0){
		cout<<"I love that ";
		}
		else{
		cout<<"I hate that ";
		}
	}
}
	return 0;
}