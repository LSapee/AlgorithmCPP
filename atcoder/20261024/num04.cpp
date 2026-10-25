#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,M,S,T;cin>>N>>M>>S>>T;
    vector<vector<int>> adj(N+1,vector<int>(0));
    for (int i=0; i<M; i++) {
        int start,end; cin>>start>>end;
        adj[start].push_back(end);
    }
    // sorting
    for (int i=1; i<=N; i++) sort(adj[i].begin(),adj[i].end());

    // for (int i=1; i<=N; i++) {
    //     for (int j=0; j<adj[i].size(); j++) {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    vector<int> ans(N+1,INT_MAX);
    deque<int> DQ;
    DQ.push_front(S);
    ans[S] =0;
    while (!DQ.empty()) {
        int cur = DQ.front(); DQ.pop_front();
        for (int nxt : adj[cur]) {
            int cost = (nxt == adj[cur][0] ? 0 : 1);
            int newCost = ans[cur]+cost;
            if (newCost >= ans[nxt]) continue;
            ans[nxt] =newCost;
            if (cost == 0)DQ.push_front(nxt);
            else DQ.push_back(nxt);
        }
    }
    if (ans[T] == INT_MAX)cout<<-1;
    else cout<<ans[T];
    return 0;
}
