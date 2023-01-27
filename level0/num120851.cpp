//숨어있는 숫자의 덧셈(1)
#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    my_string =regex_replace(my_string,regex("[a-z]"),"");
    my_string =regex_replace(my_string,regex("[A-Z]"),"");
    for(int i=0; i<my_string.length(); ++i){
        answer += my_string[i]-'0';
    }
    return answer;
}