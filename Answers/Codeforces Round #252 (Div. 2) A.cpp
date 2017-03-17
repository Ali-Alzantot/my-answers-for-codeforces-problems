# include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,k,price,cnt;
cin>>n>>m;
cnt=0;
vector <int> s(n);
for (int i=0;i<n;++i){
	cin>>k;
	bool chk=false;
	for (int j=0;j<k;++j){
		cin>>price;
		if(price < m && !chk) {
			s[cnt]=i+1;
			cnt++;
			chk=true;
		}
	}
}
cout<<cnt<<endl;
for (int i=0;i<cnt;++i){
	if(i==cnt-1)
	cout<<s[i]<<endl;
	else
	cout<<s[i]<<" ";
}
	return 0;
}