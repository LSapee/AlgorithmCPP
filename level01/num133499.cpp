#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> babbling ={"ayamaaya","yee","u","maa"};
    vector<string> arr = {"aya", "ye", "woo", "ma" };
    vector<string> arr2 = {"ayaaya", "yeye", "woowoo", "mama" };

    int count=0;
    for(int i=0; i<babbling.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(babbling[i].find(arr2[j])!=string::npos){
                break;
            }

            while(babbling[i].find(arr[j])!=string::npos){
            babbling[i].replace(babbling[i].find(arr[j]),arr[j].length(),"0");
            }
        }
        while(babbling[i].find("0")!=string::npos){
            babbling[i].replace(babbling[i].find("0"),1,"");
        }
        if(babbling[i].size()==0){
            count++;
        }
    }
    return 0;
}