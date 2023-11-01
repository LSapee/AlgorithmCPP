#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

vector<vector<int>> arr;

int bfs(int st, int n){
    int cnt=0;
    bool vis[n];
    for(int i=0; i<n; i++)vis[i] =false;
    queue<int> Q;
    Q.push(st);
    vis[st] = true;
    while(!Q.empty()){
        int k =Q.front(); Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            int t = arr[k][i];
            if(vis[t])continue;
            vis[t] =true;
            cnt++;
            Q.push(t);
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    arr.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[b].push_back(a);
    }
    int mx = -1;
    vector<int> ans(n+1);
    for(int i=1; i<=n; i++){
        int com = bfs(i,n+1);
        ans[i] =com;
        mx = max(mx,com);
    }
    for(int i=1; i<=n; i++)
        if(ans[i]==mx) cout<<i<<" ";
}