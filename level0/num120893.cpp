//대문자와 소문자
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]<97){
            my_string[i]+=32;
        }else{
            my_string[i]-=32;
        }
    }
    answer = my_string;
    return answer;
}