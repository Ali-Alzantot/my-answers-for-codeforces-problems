#include <bits/stdc++.h>
using namespace std;
int main() {
int x=0;
string s;
int n;
cin>>n;
for (int i=0;i<n;++i){
	cin>>s;
	if((int)s.find("++")!= -1)
		x++;
		else
		x--;
}
cout<<x<<endl;
	return 0;
}