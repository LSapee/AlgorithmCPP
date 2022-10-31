//
// Created on 2022/11/01.
//

#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    a= a+b;
    if(a>=c*2){
        a=a-c*2;
    }
    cout<<a;

    return 0;
}