#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};
int n,m;
bool vis[100][70];
int arr[100][70];
bool ok = false;
void bfs(int a,int b){

    vis[a][b] = 1;
    queue<pair<int,int>> Q;
    Q.push({a,b});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<8; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]>arr[a][b]) ok= true;
            if(vis[x][y]||arr[x][y]!=arr[a][b]) continue;
            Q.push({x,y});
            vis[x][y] = true;
        }
    }
    return ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    int cnt =0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(!vis[i][j]){
               ok = false;
               bfs(i,j);
               if(!ok)cnt++;
           }
        }
    }
    cout<<cnt;
}