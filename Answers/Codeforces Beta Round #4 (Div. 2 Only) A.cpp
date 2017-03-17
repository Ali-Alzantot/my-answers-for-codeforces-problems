#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin>>num;
	vector <string> v;
	map <string,int> mp;
	for (int i=0;i<num;++i){
		string in;
		cin>>in;
	if(find(v.begin(),v.end(),in)!= v.end()){
		mp[in]++;
		cout<<in<<mp[in]<<endl;
	}
	else{
		cout<<"OK"<<endl;
        v.push_back(in);
	}
	}
	return 0;
}