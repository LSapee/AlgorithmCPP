#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,ss="";
    getline(cin,s);

    stack<char> stk;
    int count =0;
    for(auto a:s){
        if(a =='<'){
            while(!stk.empty()) {
                ss += stk.top();
                stk.pop();
            }
            count++;
            ss+=a;
            continue;
        }else if(a =='>'){
            count--;
            ss+=a;
            continue;
        }
        if(count>0){
            ss+=a;
            continue;
        }

        if(a == ' '){
           while(!stk.empty()) {
               ss += stk.top();
               stk.pop();
           }
           ss+=a;
        }else{
            stk.push(a);
        }
    }
    while(!stk.empty()){
        ss+=stk.top();stk.pop();
    }
    cout<<ss;
    return 0;
}