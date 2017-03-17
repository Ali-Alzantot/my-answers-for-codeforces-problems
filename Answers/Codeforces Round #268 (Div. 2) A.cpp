#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,p,q;
	cin >> n;
	vector <int> chk (n,0);
	int x;
	cin>>p;
	for (int i=0;i<p;++i){
		cin>>x;
		chk[x-1]=1;
	}
	cin>>q;
	for (int i=0;i<q;++i){
		cin>>x;
		chk[x-1]=1;
	}
	if(find(chk.begin(),chk.end(),0)== chk.end())
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}