#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "cdcd";
    stack<char> stk;

    for(int i=0; i<s.size(); i++){
        bool t = false;
        while(!stk.empty()){
            char a = stk.top();
            if(a==s[i]){
                stk.pop();
                t = true;
            }else{
                break;
            }
        }
        if(!t)
            stk.push(s[i]);
    }
    if(stk.empty()){
        cout<<1;
    }else {cout<<0;}



    return 0;
}