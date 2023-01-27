//배열의 유사도
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(int i=0; i<s1.size(); i++){
        for(int j=0; j<s2.size(); j++){
            if(s1[i].compare(s2[j])==0){
                answer++;
            }
        }
    }
    return answer;
}