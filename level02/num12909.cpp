//올바른 괄호
#include<string>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stk;
    for(auto a:s){
        if(a=='('){
            stk.push(a);
        }else if(stk.empty()){
            answer = false;
            break;
        }else{
            stk.pop();
        }
    }
    if(!stk.empty()) answer = false;
    return answer;
}