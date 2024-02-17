#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    stack<int> stk;
    int temp =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='*'){
            temp = stk.top(); stk.pop();
            temp*=stk.top();stk.pop();
            stk.push(temp);
        }else if(s[i]=='+'){
            temp = stk.top(); stk.pop();
            temp+=stk.top();stk.pop();
            stk.push(temp);
        }else if(s[i]=='-'){
            temp = stk.top(); stk.pop();
            temp =stk.top()-temp;stk.pop();
            stk.push(temp);
        }else if(s[i]=='/'){
            temp = stk.top(); stk.pop();
            temp =stk.top()/temp;stk.pop();
            stk.push(temp);
        }else{
            stk.push(s[i]-'0');
        }
    }
    cout<<stk.top();
}