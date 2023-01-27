//문자열 계산하기
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int sum =0;
    vector<string> arr;
    string s ="";
    for(int i=0; i<my_string.size();i++){
        if(my_string[i] >=48 && my_string[i]<=57){
            s = s+my_string[i];
        }else if(my_string[i] == '+'){
            arr.push_back("+");
        }else if(my_string[i] =='-'){
            arr.push_back("-");
        }else if(s.size()>0){
            arr.push_back(s);
            s.clear();
        }
    }
    arr.push_back(s);
    sum = stoi(arr[0]);
    for(int i=1; i<arr.size(); i=i+2){
        if(arr[i].compare("+")==0){
            sum += stoi(arr[i+1]);
        }else{
            sum -= stoi(arr[i+1]);
        }
    }
    return sum;
}