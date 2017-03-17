#include <iostream>
#include <vector>
#include<algorithm>
#include <queue>
#include<set>
#include<numeric>
#include <map>
using namespace std;
int main() {
	int mx=0;
map <int,int> mp;
int n;
cin>>n;
for (int i=0;i<n;++i){
	int x;
	cin>>x;
	mp[x]++;
	mx=max(mx,mp[x]);
}
cout<<mx<<" "<<mp.size();
return 0;
}