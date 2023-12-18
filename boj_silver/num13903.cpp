#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m,s;

vector<vector<int>> arr;
vector<int> dx;
vector<int> dy;
vector<int> st;

int bfs(){
    int vis[n][m];
    fill(vis[0],vis[n],-1);
    queue<pair<int,int>> Q;
    for(int i=0; i<st.size(); i++){
        Q.push({0,st[i]});
        vis[0][st[i]] =0;
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<s; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(vis[x][y]!=-1||arr[x][y]!=1)continue;
            vis[x][y] = vis[cur.X][cur.Y]+1;
            if(x==n-1) return vis[x][y];
            Q.push({x,y});
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        vector<int> p;
        for(int j=0; j<m; j++){
            int a;cin>>a;
            p.push_back(a);
        }
        arr.push_back(p);
    }
    if(n==1){
        for(int i=0; i<m; i++){
            if(arr[0][i]==1) {
                cout<<1;
                return 0;
            }
        }
        cout<<-1;
        return 0;
    }
    cin>>s;
    for(int i=0; i<s; i++){
        int a,b;cin>>a>>b;
        dx.push_back(a);
        dy.push_back(b);
    }
    for(int i=0; i<m; i++)if(arr[0][i]==1)st.push_back(i);
    int ans = bfs();
    cout<<ans;
    return 0;
}