//
// Created on 2022/11/25.
//

#include <iostream>
#include <cmath>

using namespace std;

bool  prime_num(int n){
     int ans = sqrt(n);
     if( n ==1)
        return false;
     for(int i =2; i<=ans; i++){
         if(n%i==0)
             return  false;
     }
      return true;
}

int main(){

    int num;
    cout<<"숫자를 입력하세요"<<"\n";
    cin>>num;

    if(prime_num(num))
        cout<<"소수입니다.\n";
    else
        cout<<"소수가 아닙니다\n";
    return 0;
}