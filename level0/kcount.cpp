#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,i,j,k,count;
    i=10;
    j=50;
    k=5;
    count =0;

    for(i;i<=j;++i){
        a=i;
        while(a>0){
            if(a%10==k){
                count++;
            }
            a=a/10;
        }
    }
    cout<<count;

    return 0;
}