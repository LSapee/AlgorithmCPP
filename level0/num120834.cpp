//외계행성의 나이
#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<string> cha = {"a","b","c","d","e","f","g","h","i","j"};
    int a=0;
    while(age>0){
        a=age%10;
        answer = cha[a]+answer;
        age= age/10;
    }

    return answer;
}
