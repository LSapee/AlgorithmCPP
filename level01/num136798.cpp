#include <bits/stdc++.h>
using namespace std;

int countD(int a){
    int count =0;
    for(int i=1; i*i<=a; i++){
        if(i*i==a){
            count++;
        }else if(a%i==0){
            count+=2;
        }
    }
    return count;
}


int main(){
    int number=5,limit=3,power=2,sum=0,a=0,b=0;

    for(int i=1; i<=number; i++){
        a = countD(i);
        b= a>limit ? power:a;
        sum+=b;
    }
    cout<<sum;
    return 0;
}