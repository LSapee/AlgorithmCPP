#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<int,vector<int>,greater<int>> Q;
    int n;cin>>n;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        if(a>0){
            Q.push(a);
            continue;
        }
        if(Q.empty()){
            cout<<0<<"\n";
            continue;
        }
        cout<<Q.top()<<"\n";
        Q.pop();

    }
}