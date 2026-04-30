#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> arr;
vector<bool> vis;
void input() {
    cin>>N>>M;
    arr.resize(N+1);
    vis.resize(N+1,false);
    for (int i=0; i<M; i++) {
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
    }
}

int bfs() {
    queue<int> Q;
    Q.push(1);
    vis[1] =true;
    int cnt =1;
    while (!Q.empty()) {
        int cur = Q.front(); Q.pop();
        int l = arr[cur].size();
        for (int i=0; i<l; i++) {
            int nxt = arr[cur][i];
            if (vis[nxt])continue;
            vis[nxt]= true;
            Q.push(nxt);
            cnt++;
        }
    }
    return cnt;
}

void solve() {
    int ans =bfs();
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();

    return 0;
}
