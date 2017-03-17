#include <iostream>
using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int sum=0;
for (int i=a+1;i<=n;++i){
	if(n-i<=b)
		sum++;}
cout<<sum<<endl;
	return 0;
}