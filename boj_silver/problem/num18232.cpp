#include <bits/stdc++.h>
using namespace std;

// S= 주예, E= 방주
int n,m,S,E;
// 텔레포트 가능여부 저장
vector<vector<int>> arr;
// 이미 방문한곳인지
vector<int> vis;

int bfs(){
    queue<int> Q;
    Q.push(S);
    vis[S] =0;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        arr[cur].push_back(cur+1);
        arr[cur].push_back(cur-1);
        for(int i=0; i<arr[cur].size(); i++){
            int x = arr[cur][i];
            if(x<=0||x>n)continue;
            if(vis[x]!=-1)continue;
            Q.push(x);
            vis[x] = vis[cur]+1;
        }
    }
    return vis[E];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>S>>E;
    arr.resize(n+1);
    vis.resize(n+1,-1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int ans = bfs();
    cout<<ans;
}