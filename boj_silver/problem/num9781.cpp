#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] ={1,2,2,1,-1,-2,-2,-1};
int dy[8] ={2,1,-1,-2,-2,-1,1,2};
string arr[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr2[101][101];
    fill(arr2[0],arr2[101],-1);
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr[i]=s;
    }
    queue<pair<int,int>> Q;
    pair<int,int> f;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 'K'){
                Q.push({i,j});
                arr2[i][j] =0;
            }
            if(arr[i][j] == 'X'){
                f = {i,j};
            }
        }
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<8; i++){
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='#'||arr2[x][y]!=-1)continue;
            arr2[x][y] = arr2[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<arr2[f.X][f.Y];
}
