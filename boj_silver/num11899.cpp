#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
//    문자열 괄호 받아오기
    cin>>s;
//    스택생성
    stack<char> stk;
//    a에 s문자열의 1글자씩 받아오기
    for(auto a:s){
//        a가 )일때
        if(a==')'){
//            스택이 비지 않았고 스택의 맨뒤가 (이면 ()쌍이 맞음으로 제거해주기
            if(!stk.empty() && stk.top() == '('){
                stk.pop();
//                이후 스택에 푸쉬하지 않기 위해 컨티뉴 사용
                continue;
            }
        }
//        if의 조건들과 일치하지 않을경우 스택에 넣어주기
        stk.push(a);
    }
//    for문을 다 돌았을 때 스택에 남아 있는 괄호는 올바른 짝이 없는 괄로로 해당 괄호만큼 추가하면 된다!
    cout<<stk.size();
}