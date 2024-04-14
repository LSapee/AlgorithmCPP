#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4]= {0,1,0,-1};
int dy[4]= {1,0,-1,0};


vector<string> cow;
int n,m;

void findSt(){
    queue<pair<int,int>> Q;
    bool ok = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(cow[i][j]=='X'){
                Q.push({i,j});
                cow[i][j]='x';
                ok=true;
            }
            while(!Q.empty()){
                pair<int,int> cur= Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X+dx[z];
                    int y= cur.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(cow[x][y]=='.'||cow[x][y]=='x')continue;
                    cow[x][y]='x';
                    Q.push({x,y});
                }
            }
            if(ok) return ;
        }
    }
}

int bfs(int a,int b){
    int vis[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            vis[i][j]=-1;
        }
    }
    vis[a][b] = 0;
    queue<pair<int,int>> Q;
    int ans = 0;
    Q.push({a,b});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x= cur.X+dx[i];
            int y= cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(cow[x][y]=='x'||vis[x][y]!=-1)continue;
            if(cow[x][y]=='X') return vis[cur.X][cur.Y];
            vis[x][y] =vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    return INT_MAX;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        cow.push_back(s);
    }
    findSt();
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(cow[i][j]=='x') ans = min(ans, bfs(i, j));
        }
    }
    cout<<ans;
}