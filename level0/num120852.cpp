//소인수 분해
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            answer.push_back(i);
            n=n/i;
            i=1;
        }
    }
    sort(answer.begin(),answer.end());
    for(int i=0; i<answer.size()-1; i++){
        if(answer[i]==answer[i+1]){
            answer.erase(answer.begin()+i);
            i=-1;
        }
    }

    return answer;
}
