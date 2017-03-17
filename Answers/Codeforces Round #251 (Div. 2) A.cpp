#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,d;
	cin>>n>>d;
	int array[n];
	int sum=0;
	int num=0;
	for (int i=0;i<n;++i){
		cin>>array[i];
		sum+=array[i];
		if(i!=n-1){
			num+=2;
			sum+=10;
		}
	}
	if(sum>d)
		cout<<"-1"<<endl;
	else{
		num+=(d-sum)/5;
	cout<<num<<endl;
	}
	return 0;
}