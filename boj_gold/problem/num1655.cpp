#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    priority_queue<int> maxQ;
    priority_queue<int,vector<int>,greater<int>> minQ;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        if(maxQ.size()<=minQ.size()) maxQ.push(k);
        else minQ.push(k);
        if(!minQ.empty() && minQ.top()< maxQ.top()){
            minQ.push(maxQ.top());
            maxQ.pop();
            maxQ.push(minQ.top());
            minQ.pop();
        }
        cout<< maxQ.top()<<"\n";
    }
}