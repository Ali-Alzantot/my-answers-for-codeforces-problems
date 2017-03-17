#include <bits/stdc++.h>
using namespace std;
int main() {
int sum=0;
int n,s;
cin>>n>>s;
vector <int> array(n);
for (int i=0;i<n;++i)
	cin>>array[i];
sort(array.begin(),array.end());
sum=accumulate(array.begin(),array.begin()+n-1,0);
if(sum<=s)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
	return 0;
}