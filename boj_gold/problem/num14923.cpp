#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;//미로크기
    int hx,hy;cin>>hx>>hy; //현재 나의위치
    int ex,ey;cin>>ex>>ey; // 탈출 위치
    int arr[n+1][m+1];
    int visited[n+1][m+1];
    fill(visited[0],visited[n+1],-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int a; cin>>a;
            arr[i][j] =a;
        }
    }

    queue<pair<int,int>> Q;
    queue<pair<int,int>> Q2;
    Q.push({hx,hy});
    visited[hx][hy]=0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<1||x>n||y<1||y>m)continue;
            if(arr[x][y]==1){
                if(visited[x][y]==-1){
                    visited[x][y]=visited[cur.X][cur.Y]+1;
                    Q2.push({x,y});
                }
                continue;
            }
            if(visited[x][y]!=-1)continue;
            visited[x][y]=visited[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    while(!Q2.empty()){
        pair<int,int> cux = Q2.front(); Q2.pop();
        for(int i=0; i<4; i++) {
            int a = cux.X + dx[i];
            int b = cux.Y + dy[i];
            if(a<1||a>n||b<1||b>m)continue;
            if(arr[a][b]==1||visited[a][b]<=visited[cux.X][cux.Y]+1)continue;
            visited[a][b] = visited[cux.X][cux.Y]+1;
            Q2.push({a,b});
        }
    }
    cout<<visited[ex][ey];
}