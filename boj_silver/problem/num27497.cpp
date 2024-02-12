#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    deque<char> DQ;
    stack<int> stk;
    for(int i=0; i<n; i++){
        int a;char b;
        cin>>a;
        if(a==1){
            cin>>b;
            stk.push(1);
            DQ.push_back(b);
        }else if(a==2){
            cin>>b;
            stk.push(2);
            DQ.push_front(b);
        }else{
            if(!DQ.empty()&&!stk.empty()){
                int k = stk.top(); stk.pop();
                if(k==1)DQ.pop_back();
                else DQ.pop_front();
            }
        }
    }
    string ans = "";
    while(!DQ.empty()){
        ans+=DQ.front();
        DQ.pop_front();
    }
    if(ans.size()!=0)cout<<ans;
    else cout<<0;
}