#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int st =1;
    stack<int> stk;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        if(k==st)st++;
        if(k>st)stk.push(k);
        while(!stk.empty() && stk.top()== st){
            stk.pop();st++;
        }
    }
    if(stk.empty())cout<<"Nice";
    else cout<<"Sad";
}