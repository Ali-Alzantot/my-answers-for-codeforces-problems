#include <iostream>
#include <vector>
#include<algorithm>
#include <queue>
#include<set>
#include<numeric>
#include <map>
#include <sstream>
using namespace std;
int main() {
	int n;
	int k;
	 cin>>n;
	map <int,int> mp;
	for (int i=0;i<n;++i){
		cin>>k;
		if(k==100)
			mp[100]++;
		else
			mp[200]++;
	}
		int x=mp[100];
		int y=mp[200];
		if(y%2 != 0)
			double z=y/2.0;

if((x%2==0 && y%2==0)||(x%2==0 && y%2 !=0 && x>=2) ||(x==0 && y%2==0)||(y==0 && x%2==0) )
	cout<<"YES";
else
	cout<<"NO";

		return 0;

}