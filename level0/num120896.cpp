//한 번만 등장한 문자
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    char a = s[0];
    int count =0;
    if(s.size()==1){
        return s;
    }
    for(int i=1; i<s.size(); i++){
        if(a != s[i] && count==0){
            answer = answer + a;
            a = s[i];
        }else if(a == s[i]){
            count++;
        }else{
            a = s[i];
            count=0;
        }
        if(i==s.size()-1 && count ==0){
            answer = answer + s[i];
        }
    }
    return answer;
}