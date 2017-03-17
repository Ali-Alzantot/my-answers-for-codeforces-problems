#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k;
cin>>n>>k;
int ans;
int t,f;
cin>>f>>t;
if(t<=k)
ans=f;
else
ans=f-(t-k);
for (int i=1;i<n;++i){
	cin>>f>>t;
	if(t<=k)
	ans=max(ans,f);
	else
	ans=max(ans,f-(t-k));
}
cout<<ans<<endl;
	return 0;
}