//
// Created on 2022/12/09.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){

    string a ="allpe";
    string b= "apple";
    string s ="";
    int count = 0;
    int answer =0;
    for(int i=0; i<a.size(); ++i){
        for(int j=0; j<b.size(); ++j){
            if(a[i]==b[j]){
                count++;
                b[j] = '0';
                break;
            }
        }
    }
    if(count==a.size()){
        answer =1;
    }else{
        answer =0;
    }

    return 0;
}