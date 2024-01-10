#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    stack<int> stk;
    long long ans = 0;
    long long k;
    while(n--){
        cin>>k;
        while(!stk.empty()&&stk.top()<=k) stk.pop();
        ans+= stk.size();
        stk.push(k);
    }
    cout<<ans;
}