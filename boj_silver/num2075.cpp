#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int a =n*n;
    priority_queue<int,vector<int>,greater<int>> Q;
    for(int i=0; i<a; i++){
        int k;cin>>k;
        if(Q.size()<n) Q.push(k);
        else if(Q.top()<k){
            Q.pop();
            Q.push(k);
        }
    }
    cout<<Q.top();
}