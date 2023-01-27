//잘라서 배열로 저장
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string s ="";
    int count =0;
    for(int i=0; i<my_str.size(); i++){
        s = s+my_str[i];
        count++;
        if(count ==n){
            answer.push_back(s);
            s.clear();
            count=0;
        }
    }
    if(count!=0){
        answer.push_back(s);
    }
    return answer;
}