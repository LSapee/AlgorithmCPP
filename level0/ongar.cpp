//
// Created on 2022/12/12.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    vector<string> arr1 = {"aya", "ye", "woo", "ma" };
    vector<string> babbling = {"aya", "uuuma", "ye", "yemawoo", "ayaa"};
    int count =0;
    for(int i=0; i<babbling.size(); i++){
        for(int j =0; j<arr1.size(); ++j){
            if(babbling[i].find(arr1[j]) !=string::npos){
                babbling[i].replace(babbling[i].find(arr1[j]),arr1[j].length(),"0");
            }
        }
        while(babbling[i].find("0") != string::npos){
            babbling[i].replace(babbling[i].find("0"),1,"");
        }
    }
    for(int i=0; i<4; i++){
        if(babbling[i].length()==0){
            count++;
        }
    }
    cout<<count;

    return 0;

}