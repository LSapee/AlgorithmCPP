#include <bits/stdc++.h>
using namespace std;

int blue = 1;
int red = 0;

bool bfs(){
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n+1,vector<int>(0));
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int vis[n+1];
    fill(vis,vis+n+1,-1);
    queue<int> Q;
    for(int i=1; i<=n; i++){
        if(vis[i]!=-1)continue;
        Q.push(i);
        vis[i] = blue;
        while(!Q.empty()){
            int cur = Q.front();Q.pop();
            for(int i=0; i<arr[cur].size(); i++){
                int k = arr[cur][i];
                if(vis[k]!=-1){
                    if(vis[k]==vis[cur]) return false;
                    continue;
                }
                if(vis[cur]==red) vis[k]=blue;
                else vis[k]=red;
                Q.push(k);
            }
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--){
       bool ok = bfs();
        if(ok) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}