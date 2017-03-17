# include <iostream>
using namespace std;
int main (){
#ifndef ONLINE_JUDGE
    freopen("d:\\input.txt", "r", stdin);
#endif
    int num;
    int pass;
    cin>>num;
    cin>>pass;
    int n=pass;
    int array[100];
    for(int i=0;i<num;i++){
    cin>>array[i];
    }
    array[num]=0;
   for (int j=0;j<pass;j++){
   if (array[j]<=0)
   n-=1;
   }
   for (int m=pass;m<=num;m++){
   if (array[m] == array[pass-1] && array[m] > 0)
   n+=1;
   }
   cout<<n<<endl;
return 0;
}