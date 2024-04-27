#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n,m;
char arr[1000][1000];
char vis[1000][1000];
int stx, sty;
char color;
char startColor;
void bfs(){
    arr[stx][sty] = color;
    vis[stx][sty] = true;
    queue<pair<int,int>> Q;
    Q.push({stx,sty});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]!=startColor||vis[x][y])continue;
            vis[x][y]= true;
            arr[x][y] = color;
            Q.push({x,y});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    cin>>stx>>sty>>color;
    startColor = arr[stx][sty];
    bfs();
    for(int i=0; i<n; i++)cout<<arr[i]<<"\n";
}