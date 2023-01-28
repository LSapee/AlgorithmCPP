//  배열 원소의 길이

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(string s : strlist){
        answer.push_back(s.size());
    }
    return answer;
}