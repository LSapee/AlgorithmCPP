#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum =0;
    int k =1;
    string s;cin>>s;
    stack<char> stk;
    for(int i=0; i<s.size(); i++){
        char a= s[i];
        if(a=='('){
            k*=2;
            stk.push(a);
        }else if(a=='['){
            k*=3;
            stk.push(a);
        }else if(a==')'){
            if(stk.empty() || stk.top() != '('){
                cout<< 0;
                return 0;
            }
            if(s[i-1] =='(')sum+=k;
            stk.pop();
            k/=2;
        }else{
            if(stk.empty()||stk.top() != '['){
                cout<< 0;
                return 0;
            }
            if(s[i-1] == '[') sum+=k;
            stk.pop();
            k/=3;
        }
    }
    if(stk.empty())cout<<sum;
    else cout<<0;
}
