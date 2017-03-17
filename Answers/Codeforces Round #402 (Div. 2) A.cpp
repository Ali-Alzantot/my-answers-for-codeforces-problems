# include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector <int> a(n);
vector <int> b(n);
vector <int> visted(n*2);
int cnt=0;
bool chk=true;
int decide,cnta,cntb;
for (int i=0;i<n;++i)
	cin>>a[i];
for (int i=0;i<n;++i)
	cin>>b[i];
for  (int i=0;i<n;++i){
	if(find(visted.begin(),visted.end(),a[i])==visted.end()){
		cnta=0; cntb=0; decide=0;
		cnta=count(a.begin(),a.end(),a[i]);
		cntb=count(b.begin(),b.end(),a[i]);
		decide=cnta+cntb;
		if(decide%2==0){
			cnt+=max(decide/2,cnta)-min(decide/2,cnta);
			visted.push_back(a[i]);
		} else{
			chk=false;
			break;
		}
	}
	else
		continue;
}
if(chk){
	for  (int i=0;i<n;++i){
		if(find(visted.begin(),visted.end(),b[i])== visted.end()){
			cnta=0; cntb=0; decide=0;
			cnta=count(a.begin(),a.end(),b[i]);
			cntb=count(b.begin(),b.end(),b[i]);
			decide=cnta+cntb;
			if(decide%2==0){
				cnt+=max(decide/2,cnta)-min(decide/2,cnta);
				visted.push_back(b[i]);
			} else{
				chk=false;
				break;
			}
		}
		else
			continue;
	}
	if (chk)
		cout<<ceil(cnt/2.0)<<endl;
	else
		cout<<"-1"<<endl;
}
else
	cout<<"-1"<<endl;
	return 0;
}