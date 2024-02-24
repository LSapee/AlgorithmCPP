#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr;
vector<int> vis;
void bfs(int st){
    queue<int> Q;
    Q.push(st);
    vis[st] = 0;
    while(!Q.empty()){
        int k =Q.front(); Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            // 다음 방문 지점 x
            int x = arr[k][i];
            // 이미 방문했다면 컨티뉴
            if(vis[x]!=-1)continue;
            // 이전 방문 지점 +1;
            vis[x]= vis[k]+1;
            Q.push(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,st;
    cin>>n>>m>>st;
    // 2차원 vector에 빈 vector 넣어주기
    arr.resize(n+1);
    vis.resize(n+1);
    for(int i=0; i<=n; i++)vis[i]=-1;
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    bfs(st);
    for(int i=1; i<=n; i++)cout<<vis[i]<<"\n";
}