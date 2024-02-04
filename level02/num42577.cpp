#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer =true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0; i<phone_book.size()-1; i++){
        string s = phone_book[i+1].substr(0,phone_book[i].size());
        if(s.find(phone_book[i])!=string::npos) return false;
    }
    return answer;
}