#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] ={1,0,-1,0};
int zzz[3001][3001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    queue<pair<int,int>> Q;
    char arr[n][m];for(int i=0;i<n;i++){for(int j=0; j<m; j++){cin>>arr[i][j];if(arr[i][j]=='2')Q.push({i,j});}}
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='1' || zzz[x][y]!=0)continue;
            if(arr[x][y]=='3'||arr[x][y]=='4'||arr[x][y]=='5'){
                cout<<"TAK"<<"\n";
                cout<<zzz[cur.X][cur.Y]+1;
                return 0;
            }
            zzz[x][y] = zzz[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<"NIE";
}