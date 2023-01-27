#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    for(int i=1; i<=8; i++){
        cin>>n;
        if(n==i){
            sum++;
        }else if(n==9-i){
            sum+=2;
        }else{
            sum+=10;
        }
    }
    if(sum==8){
        cout<<"ascending";
    }else if(sum==16){
        cout<<"descending";
    }else{
        cout<<"mixed";
    }

    return 0;
}