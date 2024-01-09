#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A,B,m;cin>>A>>B>>m;
    int sum =0;
    int a;
    while(m--){
        cin>>a;
        sum+=a*pow(A,m);
    }
    stack<int> stk;
    while(sum>=B){
        if(sum%B<=B) stk.push(sum%B);
        sum/=B;
    }
    cout<<sum<<" ";
    while(!stk.empty()){
        int cur = stk.top();stk.pop();
        cout<<cur<<" ";
    }


}