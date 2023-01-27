//문자열 정렬하기(1)
#include <string>
#include <vector>
#include <regex>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    my_string = regex_replace(my_string,regex("[a-z]"),"");
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++){
        answer.push_back(my_string[i]-'0');
    }
    sort(answer.begin(),answer.end());
    return answer;
}
