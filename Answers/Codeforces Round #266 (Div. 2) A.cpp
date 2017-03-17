#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int sum=0;
	if(a*m<b)
		sum+=a*n;
	else{
	sum+=n/m*b;
	if(n%m*a < b)
		sum+=n%m*a;
	else
		sum+=b;
	}
	cout<<sum<<endl;
	return 0;
}