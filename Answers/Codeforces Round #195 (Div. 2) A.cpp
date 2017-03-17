#include <iostream>
using namespace std;
void first (int a ,int b){
int x1,y1,x2,y2;
x1=0;
x2=a+b;
y1=a+b;
y2=0;
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
}
void second (int a , int b){
    int x1,y1,x2,y2;
x1=(-b)+a;
x2=0;
y1=0;
y2=b+(-a);
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
}
void third (int a , int b){
    int x1,y1,x2,y2;
x1=a+b;
x2=0;
y1=0;
y2=a+b;
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
}
void forth (int a , int b){
    int x1,y1,x2,y2;
x1=0;
x2=a+(-b);
y1=b+(-a);
y2=0;
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
}
int main ()
{
  int x,y;
  cin>>x>>y;
  if(x>0 && y>0){
  first(x,y);
  }
  else if (x<0 && y>0){
  second(x,y);
  }
  else if (x<0 && y <0) {
  third (x,y);
  }
  else if (x>0 && y<0){
  forth(x,y);
  }
  return 0;
}