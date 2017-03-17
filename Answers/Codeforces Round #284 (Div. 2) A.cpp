#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
vector <int> vl(n);
vector <int> vr(n);
for (int i=0;i<n;++i)
	cin>>vl[i]>>vr[i];
long long min=0;
long long cur=1;
for (int i=0;i<n;++i){
	while(cur!=vl[i]){
		if(cur+x>vl[i]){
			cur++;
			min++;
		}
		else if(cur+x<=vl[i])
			cur+=x;
	}
	//cur==vl[i]
	  min+=(vr[i]+1)-vl[i];
	  cur=vr[i]+1;
}
cout<<min<<endl;
	return 0;
}