#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

vector<string> arr;
vector<vector<int>> bmap;
int n,m;
void bfs(){
    queue<pair<int,int>> Q;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(bmap[i][j]==1)Q.push({i,j});
        }
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='1'||bmap[x][y]!=0)continue;
            bmap[x][y]= bmap[cur.X][cur.Y]+1;
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
        string s; cin>>s;arr.push_back(s);
        vector<int> temp(m,0);
        bmap.push_back(temp);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='1'){
                for(int z =0; z<4; z++){
                    int x = dx[z]+i;
                    int y = dy[z]+j;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]=='1'||bmap[x][y]!=0)continue;
                    bmap[x][y]= 1;
                }
            }
        }
    }
    bfs();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<bmap[i][j]<<" ";
        }
        cout<<"\n";
    }
}