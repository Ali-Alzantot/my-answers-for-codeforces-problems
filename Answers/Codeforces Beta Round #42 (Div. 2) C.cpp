#include <iostream>
# include <map>
# include <vector>
#include <algorithm>
#include <math.h>
# include <sstream>
using namespace std;
 int concat (long long int num1, long long int num2){
    int sum=0;
    sum+=num1%3;
    sum+=num2%3;
    return sum;
}

int main() {
    int n;
    cin>>n;
    int ticket[n];
    for (int i=0;i<n;i++){
        cin>>ticket[i];
    }
    int count=0;
    for (int i=0;i<n;i++){
        if(ticket[i]==0)
                    continue;
        for (int j=i+1;j<n;j++){
            if(ticket[j]==0)
                continue;
            if(concat(ticket[i],ticket[j])%3==0){
                count++;
                ticket[j]=0;
                ticket[i]=0;
break;
            }
        }
    }
    cout<<count;
    return 0;
}