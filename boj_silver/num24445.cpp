#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,st;cin>>n>>m>>st;
    vector<vector<int>> arr(n+1,vector<int>(0));
    int vis[n+1];
    fill(vis,vis+n+1,0);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<int> Q;
    Q.push(st);
    int a=2;
    vis[st] =1;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        sort(arr[cur].rbegin(),arr[cur].rend());
        for(int i=0; i<arr[cur].size(); i++){
            int k =arr[cur][i];
            if(vis[k]>0)continue;
            vis[k] = a++;
            Q.push(k);
        }
    }
    for(int i=1; i<=n;i++)cout<<vis[i]<<"\n";
}