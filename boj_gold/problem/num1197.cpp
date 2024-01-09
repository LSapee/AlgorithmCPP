#include <bits/stdc++.h>
#define X first
#define Y second
// 프림 알고리즘 사용
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int v,e;cin>>v>>e;
    bool chk[10005];
    int cnt =0;
    fill(chk,chk+10005,false);
    vector<pair<int,int>> adj[10005];
    priority_queue<tuple<int,int,int>,
            vector<tuple<int,int,int>>,
            greater<tuple<int,int,int>>> PQ;
    for(int i=0; i<e; i++){
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({c,b});
        adj[b].push_back({c,a});
    }
    chk[1] = true;
    int ans =0;
    for(auto nxt : adj[1]) PQ.push({nxt.X,1,nxt.Y});
    while(cnt <v-1){
        int a,b,c;
        tie(c,a,b) = PQ.top(); PQ.pop();
        if(chk[b])continue;
        ans +=c;
        chk[b] = 1;
        cnt++;
        for(auto nxt : adj[b]){
            if(!chk[nxt.Y]) PQ.push({nxt.X,b,nxt.Y});
        }
    }
    cout<<ans;



}