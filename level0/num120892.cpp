//암호 해독
#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for(int i=code-1; i<cipher.size(); ++i){
        if(i%code==code-1){
            answer = answer+cipher[i];
        }
    }
    return answer;
}