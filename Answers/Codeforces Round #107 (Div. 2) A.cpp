#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int mil=k*l/nl;
	int slice=c*d;
	int gm=p/np;
	int res=min(mil,slice);
	res=min(res,gm);
	res/=n;
	cout<<res<<endl;
	return 0;
}