#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int N,M;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    vector<int> ans(N+1,INT_MAX);
    ans[1]=0;
    map<int,vector<pair<int,int>>> graph;
    for(int i =0; i<M; i++){
        int u,v,e;cin>>u>>v>>e;
        graph[u].push_back({v,e});
        graph[v].push_back({u,e});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        pair<int,int> cur = pq.top();pq.pop();
        for(auto nxt : graph[cur.Y]){
            if(nxt.Y+cur.X<ans[nxt.X]){
                ans[nxt.X] = nxt.Y+cur.X;
                pq.push({ans[nxt.X],nxt.X});
            }
        }
    }
    cout<<ans[N];
}