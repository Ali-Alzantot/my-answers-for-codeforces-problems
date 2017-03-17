#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int array [n];
int sum=0;
bool chkb,chks;
for (int i=0;i<n;++i){
	cin>>array[i];
	chkb=true;
	chks=true;
	for (int j=0;j<i;++j){
		if(array[j]>=array[i])
			chkb=false;
		if(array[j]<=array[i])
			chks=false;
	}
	if((chkb||chks) && i!= 0)
		sum++;
}
cout<<sum<<endl;
	return 0;
}