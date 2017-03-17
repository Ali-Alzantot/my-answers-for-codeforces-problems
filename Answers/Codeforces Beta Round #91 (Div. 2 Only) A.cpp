#include <bits/stdc++.h>
using namespace std;
bool islucky(int n){
	string s;
	stringstream ss(s);
	ss<<n;
	s=ss.str();
	 if(s.find("0")!=-1)
		return false;
	else if(s.find("1")!=-1)
		return false;
	else if(s.find("2")!=-1)
			return false;
	else if(s.find("3")!=-1)
			return false;
	else if(s.find("5")!=-1)
			return false;
	else if(s.find("6")!=-1)
			return false;
	else if(s.find("8")!=-1)
			return false;
	else if(s.find("9")!=-1)
			return false;
	else
		return true;

}
int main() {
	 int n;
	  cin>>n;
	 if  (islucky(n) ||(n%4==0)||(n%7==0)||(n%47==0)||(n%74==0))
		 cout<<"YES"<<endl;
	 else
		 cout<<"NO"<<endl;
	return 0;
}