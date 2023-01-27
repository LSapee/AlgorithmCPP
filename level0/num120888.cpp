//중복된 문자 제거
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    int count =0;
    string sam = "";
    sam = sam + my_string[0];
    for(int i=0; i<my_string.size(); ++i){
        for(int j=0; j<sam.size(); j++){
            count =0;
            if(my_string[i] == sam[j]){
                count++;
                break;
            }
        }
        if(count ==0){
            sam = sam + my_string[i];
        }
    }
    return sam;
}