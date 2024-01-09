#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        stack<int> stk;
        for(int j=0; j<s.size(); j++){
            if(!stk.empty()){
                if(stk.top()==s[j]) stk.pop();
                else stk.push(s[j]);
                continue;
            }
            stk.push(s[j]);
        }
        if(stk.empty())count++;
    }
    cout<<count;
}