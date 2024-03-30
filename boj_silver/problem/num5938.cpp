#include <bits/stdc++.h>
using namespace std;

int n,m;
bool vis[255];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    vector<vector<int>> arr(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<int> Q;
    Q.push(1);
    vis[1]= true;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        for(int i=0; i<arr[cur].size(); i++){
            int x = arr[cur][i];
            if(vis[x])continue;
            vis[x] =true;
            Q.push(x);
        }
    }
    bool ok = false;
    for(int i=1; i<=n; i++){
        if(vis[i])continue;
        cout<<i<<"\n";
        ok = true;
    }
    if(!ok)cout<<0;
}