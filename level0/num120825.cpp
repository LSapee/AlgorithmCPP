//문자 반복 출력하기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i=0; i<my_string.length(); ++i){
        for(int j=0; j<n; ++j){
            answer = answer + my_string[i];
        }
    }
    return answer;
}