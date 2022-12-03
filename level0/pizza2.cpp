//
// Created on 2022/12/03.
//

#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n =6;
    int pizza = 4;
    int count =1;
    while(n>0){
        if(n%pizza>0){
            n+=6;
            count++;
        }else{
            break;
        }
    }
    cout<<count;
    return 0;
}