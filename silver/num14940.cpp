#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int arr[1002][1002];
int vis[1002][1002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a;
            cin>>a;
            arr[i][j]=a;
            if(a==1){
                vis[i][j]=-1;
            }
            if(a==2){
                Q.push({i,j});
                arr[i][j]=0;
            }
        }
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0;i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m) continue;
            if(arr[x][y]==0) continue;
            arr[x][y] =0;
            vis[x][y] = vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<"\n";
    }
}