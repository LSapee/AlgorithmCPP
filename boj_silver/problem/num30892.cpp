#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;cin>>n>>k;
    long long T;cin>>T;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;cin>>a; arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    stack<int> stk;
    for(int i=0; i<n; i++){
        if(k==0)break;
        while(!stk.empty()&&arr[i]>=T){
            if(T<=stk.top())break;
            T+=stk.top();
            stk.pop();
            k--;
        }
        stk.push(arr[i]);
    }
    while(k>0&&!stk.empty()){
        if(T>stk.top()){
            T+=stk.top(); stk.pop();k--;
        }else break;

    }
    cout<<T;
}