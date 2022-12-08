//
// Created on 2022/12/08.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string rsp = "205";
    string answer = "";
    for(int i=0; i<rsp.size(); ++i){
        if(rsp[i]=='2'){
            answer.append("0");
        }else if(rsp[i]=='0'){
            answer.append("5");
        }else{
            answer.append("2");
        }
    }
    cout<<answer;

    return 0;
}