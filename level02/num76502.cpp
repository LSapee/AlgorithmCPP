#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int solution(string s) {
    int answer = 0;
    int n =s.size();
    while(n--){
        stack<char> stk;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stk.push(s[i]);
            }else{
                if(s[i]==')'&&stk.top()=='('){
                    stk.pop();
                }else if(s[i]=='}'&&stk.top()=='{'){
                    stk.pop();
                }else if(s[i]==']'&& stk.top()=='['){
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
            }
        }
        if(stk.empty())answer++;
        char a = s[0];
        for(int i=0; i<s.size()-1; i++) s[i] = s[i+1];
        s[s.size()-1]=a;
    }
    return answer;
}