# include <bits/stdc++.h>
using namespace std;
int main(){
string one;
string two;
cin>>one>>two;
transform(one.begin(),one.end(),one.begin(),::tolower);
transform(two.begin(),two.end(),two.begin(),::tolower);
cout<<strcmp(&one[0],&two[0])<<endl;
	return 0;
}