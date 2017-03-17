#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,c,rem;
	cin>>n>>a>>b>>c;
	int mx=0;
	for (int i=0;i<=(4000/a);++i){
		for (int j=0;j<=(4000/b);++j){
			if((n-(a*i+b*j)) >=0 && (n-(a*i+b*j)) %c == 0){
			rem= (n-(a*i+b*j))/c;
			if ((n-(a*i+b*j+c*rem)) == 0)
				mx=max(mx,(i+j+rem));
			}
		}
	}
        cout<<mx<<endl;
	return 0;
}