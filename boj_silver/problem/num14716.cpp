#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a;cin>>a;
            arr[i][j]=a;
        }
    }
    int count =0;
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            if(arr[i][j]==1) {
                Q.push({i, j});
                arr[i][j]=0;
                count++;
            }
            while(!Q.empty()){
                pair<int,int> c = Q.front();Q.pop();
                for(int z=0; z<8;z++){
                    int x = c.X+dx[z];
                    int y = c.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]==0)continue;
                    arr[x][y] =0;
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<count;
}