#include <bits/stdc++.h>
using namespace std;
int main(){
int x1,x2,y1,y2,x,y;
cin>>x1>>y1>>x2>>y2;
x=max(x1,x2)-min(x1,x2);
y=max(y1,y2)-min(y1,y2);
cout<<max(x,y)<<endl;
return 0;
}