#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m,c,x,y;
cin>>n;
m=0;
c=0;
for (int i=0;i<n;++i){
cin>>x>>y;
if(x>y)
m++;
else if(y>x)
c++;
}
if(m==c)
	cout<<"Friendship is magic!^^"<<endl;
else if (m>c)
	cout<<"Mishka"<<endl;
else
	cout<<"Chris"<<endl;
	return 0;
}