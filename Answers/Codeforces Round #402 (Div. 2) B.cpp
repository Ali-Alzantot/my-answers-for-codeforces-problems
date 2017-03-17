# include <bits/stdc++.h>
using namespace std;

int main(){
string number;
int k;
int cntofzero,cntofnonzero;
cin>>number>>k;
int cnt=count(number.begin(),number.end(),'0');
if(cnt>=k){
	cntofzero=0;
	cntofnonzero=0;
	for(int i=number.length()-1;i>=0;--i){
		if(number[i]=='0')
			cntofzero++;
		else
			cntofnonzero++;
		if(cntofzero==k)
			break;
	}
	cout<<cntofnonzero<<endl;
}
else{
	cout<<number.length()-1<<endl;
}
	return 0;
}