#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;

int dx[2] = {0,1};
int dy[2] = {1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans(n,vector<int>(m,-1));

    ans[0][0]=0;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<2; i++){
            int x =cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x>=n||y>=m)continue;
            if(arr[x][y]==0||ans[x][y]!=-1)continue;
            ans[x][y] = ans[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    if(ans[n-1][m-1]==-1)cout<<"No";
    else cout<<"Yes";
}
