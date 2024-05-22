#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

vector<vector<int>> vis;
vector<string> carpet;

int w,h;

void bfs(){
    queue<pair<int,int>> Q;
    Q.push({0,0});
    vis[0][0]=0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        char mypos = carpet[cur.X][cur.Y];
        for(int i=0; i<4; i++){
            int x= dx[i]+cur.X;
            int y = dy[i] +cur.Y;
            if(x<0||x>=h||y<0||y>=w)continue;
            if(carpet[x][y]==mypos||vis[x][y]!=-1)continue;
            vis[x][y]= vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>h>>w;
    //배열 초기화
    for(int i=0; i<h; i++){
        string s;cin>>s;
        carpet.push_back(s);
    }
    for(int i=0; i<h; i++){
        vector<int> temp;
        for(int j=0; j<w; j++){
            temp.push_back(-1);
        }
        vis.push_back(temp);
    }
    bfs();
    cout<<vis[h-1][w-1];
}