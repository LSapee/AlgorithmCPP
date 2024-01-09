#include <bits/stdc++.h>
using namespace std;

int n,m,st;
vector<vector<int>> arr;
vector<bool> vis;
vector<int> ans;

void bfs(){
    int stNum =1;
    vis[st] = true;
    ans[st] =stNum;
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        for(int i=0; i<arr[cur].size(); i++){
            int k = arr[cur][i];
            if(vis[k])continue;
            stNum++;
            Q.push(k);
            vis[k] = true;
            ans[k] =  stNum;
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>st;
    for(int i=0; i<=n; i++)vis.push_back(false);
    arr.resize(n+1);
    ans.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i=1; i<=n;i++)sort(arr[i].begin(),arr[i].end());
    bfs();
    for(int i=1; i<=n; i++)cout<<ans[i]<<"\n";
    return 0;
}