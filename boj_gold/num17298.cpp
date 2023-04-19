#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    stack<int> stk;
    vector<int> arr;
    vector<int> ans(n);
    stk.push(0);
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    for(int i=1; i<n; i++){
        while(!stk.empty() && arr[stk.top()]<arr[i]){
            ans[stk.top()]=arr[i];
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty()){
        ans[stk.top()] =-1;
        stk.pop();
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }

}
