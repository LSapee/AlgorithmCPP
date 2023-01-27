//진료순서 정하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> emergency2 = emergency;
    vector<int> answer;
    sort(emergency2.begin(),emergency2.end());

    for(int i=0; i<emergency2.size(); ++i){
        for(int j =0; j<emergency.size(); ++j){
            if(emergency2[i] == emergency[j]){
                answer.push_back(emergency2.size()-j);
                break;
            }
        }
    }
    return answer;
}