#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int sum=0;
	for (int i=1;i<=100;++i){
		if(i<=n && i<=m)
			sum++;
		else
			break;
	}

	if(sum % 2  != 0)
		cout<<"Akshat"<<endl;
	else
		cout<<"Malvika"<<endl;

	return 0;
}