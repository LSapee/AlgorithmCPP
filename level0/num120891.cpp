//369게임
#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string s = to_string(order);
    for (char a : s){
        if (a == '3' || a == '6' || a == '9')
            answer += 1;
    }

    return answer;
}