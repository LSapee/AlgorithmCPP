#include <string>
#include <vector>
#include <iostream>

using namespace std;

string tolower(string s){
    for(int i=0; i<s.size(); i++) if(s[i]>=65&&s[i]<=90)s[i]+=32;
    return s;
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> arr;
    if(cacheSize==0) return cities.size()*5;
    int st =0;
    for(int i=0; i<cities.size(); i++){
        string s = tolower(cities[i]);
        bool check = false;
        int targetNum =0;
        for(int j=st; j<arr.size(); j++){
            if(arr[j].compare(s)==0){
                targetNum = j;
                check =true;
            }
        }
        if(check) answer++;
        else answer+=5;
        for(int j =targetNum; j>st; j--) arr[j] = arr[j-1];
        if(arr.size()>=cacheSize) st++;
        arr.push_back(s);
    }
    return answer;
}