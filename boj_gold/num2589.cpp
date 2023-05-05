#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[51][51];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    string s[n];
    for(int i=0; i<n; i++)cin>>s[i];
    int count =-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            queue<pair<int,int>> Q;
            if(s[i][j]=='L'){
                Q.push({i,j});
                fill(arr[0],arr[n],-1);
                arr[i][j] =0;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x =cur.X+dx[z];
                    int y = cur.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]!=-1|| s[x][y]=='W')continue;
                    arr[x][y] = arr[cur.X][cur.Y]+1;
                    count = max(count,arr[x][y]);
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<count;
}
