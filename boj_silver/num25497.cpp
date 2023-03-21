#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin>>n>>s;
    stack<char> stk;
    stack<char> stk2;
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'L') {
            stk.push(s[i]);
            continue;
        }else if(s[i] == 'S') {
            stk2.push(s[i]);
            continue;
        }else if(s[i] == 'R'){
            if(stk.empty()){
                break;
            }else{
                stk.pop();
                count++;
            }
        }else if(s[i]=='K'){
            if(stk2.empty()){
                break;
            }else{
                stk2.pop();
                count++;
            }
        }else{
            count++;
        }

    }
    cout<<count;
}