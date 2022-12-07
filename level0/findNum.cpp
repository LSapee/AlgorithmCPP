//
// Created on 2022/12/07.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int num =312421;
    int k=1;
    int a =0;
    int count =0;
    while(num>0){
        a = num%10;
        num=num/10;
        count++;
        if(a==k){

        }
    }
    if(a!=k){
        count =-1;
    }

    return 0;
}