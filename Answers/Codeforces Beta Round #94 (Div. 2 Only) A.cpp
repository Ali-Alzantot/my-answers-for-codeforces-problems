#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int array [n];
int sum=0;
int num=0;
for (int i=0;i<n;++i){
	cin>>array [i];
	sum+=array [i];
}
for (int j=0;j<n;++j){
	if ((sum-array[j])%2==0 )
		num++;
}

cout<<num<<endl;

	return 0;
}