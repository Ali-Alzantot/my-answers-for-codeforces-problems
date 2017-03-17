#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int sum=0;
	int mx=max(n,m);
	for (int i=0;i<=mx;++i){
		for (int j=i;j<=mx;++j){
			if (i ==j){
				if ((i*i+j==n && i+j*j==m) || (j*j+i==n && j+i*i==m))
					sum++;
			}
			else{
			if((i*i+j==n && i+j*j==m))
				sum++;
			if((j*j+i==n && j+i*i==m))
				sum++;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}