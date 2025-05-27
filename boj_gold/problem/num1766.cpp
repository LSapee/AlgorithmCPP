#include <bits/stdc++.h>
using namespace std;
int N,M;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>M;
    vector<vector<int>> adj(N+1,vector<int>(0));
    vector<int> preCnt(N+1,0);
    for(int i=0; i<M; i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        preCnt[b]++;
    }
    priority_queue<int,vector<int>,greater<int>> PQ;
    for(int i=1; i<=N; i++){
        if(preCnt[i]==0) PQ.push(i);
    }
    while(!PQ.empty()){
        int k = PQ.top(); PQ.pop();
        cout<<k<<" ";
        for(int i=0; i<adj[k].size(); i++){
            preCnt[adj[k][i]]--;
            if(preCnt[adj[k][i]]==0) PQ.push(adj[k][i]);
        }
    }
    return 0;
}
