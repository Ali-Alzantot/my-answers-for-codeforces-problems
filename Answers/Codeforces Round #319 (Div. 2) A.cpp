#include <bits/stdc++.h>
using namespace std;
int main() {
int num=0;
int n,x;
cin>>n>>x;
for (int i=1;i<=n;++i){
	if(x/i<=n &&x%i==0)
		num++;
}
cout<<num<<endl;
	return 0;
}