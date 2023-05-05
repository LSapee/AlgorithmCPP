#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int visited[64][64];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            cin>>arr[i][j];
        }
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    visited[0][0]= true;

    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        int k = arr[cur.X][cur.Y];
        int dx[2] = {k,0};
        int dy[2] = {0,k};
        for(int i=0; i<2; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(visited[x][y])continue;
            visited[x][y] = true;
            Q.push({x,y});
        }
    }
    if(visited[n-1][n-1]) cout<<"HaruHaru";
    else cout<<"Hing";
}