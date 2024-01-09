#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] ={0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int arr[50][50];
int vis[50][50];
int n,m;
int mx = INT_MIN;
queue<pair<int,int>> Q;

void bfs(){
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<8; i++){
            int x = dx[i]+cur.X;
            int y =dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]==1 || vis[x][y]!=0)continue;
            vis[x][y] = vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1)Q.push({i,j});
        }
    }
    bfs();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            mx= max(vis[i][j],mx);
        }
    }
    cout<<mx;
}