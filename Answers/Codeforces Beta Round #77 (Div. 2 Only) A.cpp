#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
if((int)s.find("1111111")!=-1||(int)s.find("0000000")!=-1)
	cout<<"YES"<<endl;
    else
	cout<<"NO"<<endl;
	return 0;
}