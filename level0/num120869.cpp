#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> spell ={"p","o","s"};
    vector<string> dic =  {"sod", "eocd", "qixm", "adio", "soo"};
    int answer =2;
    int count = 0;
    for(int i=0; i<dic.size(); i++){
        for(int j=0; j<spell.size(); j++){
            if(dic[i].find(spell[j])!=string::npos){
                count++;
            }
        }
        if(count== spell.size()){
            answer = 1;
            break;
        }
        count =0;
    }
    return 0;
}