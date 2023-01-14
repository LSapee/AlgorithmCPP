#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(1){
        getline(cin,s);
        if(s ==".")
            break;
        stack<char> stk;
        for(auto a : s){
            if(a=='(' || a=='['){
                stk.push(a);
            }else if(a==')'){
                if(!stk.empty()){
                    if(stk.top() =='('){
                        stk.pop();
                    }else{
                        stk.push('a');
                        break;
                    }

                }else{
                    stk.push('a');
                    break;
                }
            }else if(a==']'){
                if(!stk.empty()) {
                    if (stk.top() == '['){
                        stk.pop();
                }else{
                        stk.push('a');
                        break;
                    }
                }else{
                    stk.push('a');
                    break;
                }
            }
        }
        if(stk.empty()){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }

    return 0;
}