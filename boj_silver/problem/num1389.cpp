#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;
vector<vector<int>> arr;

pair<int,int> bfs(int a){
    int vis[n+1];
    fill(vis,vis+n+1,-1);
    vis[a] =0;
    queue<int> Q;
    Q.push(a);
    while(!Q.empty()){
        int k = Q.front();Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            int t = arr[k][i];
            if(vis[t]!=-1)continue;
            vis[t] = vis[k]+1;
            Q.push(t);
        }
    }
    int sum =0;
    for(int i=1; i<=n; i++)sum+=vis[i];

    return make_pair(sum,a);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    arr.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int mn = INT_MAX;
    int ans =0;
    for(int i=1; i<=n; i++){
        pair<int,int> k = bfs(i);
        if(mn>k.X){
            mn=k.X;
            ans = k.Y;
        }else if(mn == k.X){
            if(ans>k.Y) ans=k.Y;
        }
    }
    cout<<ans;
}