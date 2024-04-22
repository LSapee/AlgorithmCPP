#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> vis;
vector<vector<int>> gugu;
int n;
void bfs(){
    queue<int> Q;
    Q.push(1);
    vis[1] =0;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        for(int i=1; i<=n; i++){
            if(vis[i]!=-1)continue;
            if(gugu[cur][i]==-1)continue;
            vis[i] = vis[cur]+gugu[cur][i];
            Q.push(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    gugu.resize(n+1,vector<int>(n+1,-1));
    vis.resize(n+1,-1);
    for(int i=1; i<n; i++){
        int a,b,c;cin>>a>>b>>c;
        gugu[a][b]=c;
        gugu[b][a]=c;
    }
    bfs();
    ll ans = -1;
    for(int i=1; i<=n; i++)ans =max(ans,vis[i]);
    cout<<ans;
    return 0;
}