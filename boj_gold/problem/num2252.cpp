#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int v,e; cin>>v>>e;
    vector<int> adj[v+1];
    int deg[v+1];
    fill(deg,deg+v+1,0);
    for(int i=0; i<e; i++){
        int a,b;cin>>a>>b;
        deg[b]++;
        adj[a].push_back(b);
    }
    queue<int> Q;
    vector<int> ans;
    for(int i=1; i<=v; i++) if(deg[i]==0) Q.push(i);

    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        ans.push_back(cur);
        for(auto nxt : adj[cur]){
            deg[nxt]--;
            if(deg[nxt]==0) Q.push(nxt);
        }
    }
    for(int an : ans) cout<<an<<" ";
}