#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    stack<char> stk;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')stk.push(s[i]);
        if(s[i]==')'){
            if(!stk.empty()){
                stk.pop();
            }
        }
        if(s[i]=='*')cout<<stk.size();

    }
}