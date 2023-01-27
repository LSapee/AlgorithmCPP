//모음제거
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] != 97&&
           my_string[i] != 101&&
           my_string[i] != 105&&
           my_string[i] != 111&&
           my_string[i] != 117){
            answer = answer + my_string[i];
        }
    }
    return answer;
}
