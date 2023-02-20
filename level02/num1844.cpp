#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

//시계방향 3시 6시 9시 12시 확인
int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int arr[101][101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(arr[0],arr[101],-1);
    vector<vector<int>> maps = {{1,0,1,1,1},{1,0,1,0,1},{1,0,1,1,1},{0,0,0,0,0},{0,0,0,0,1}};

    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int,int>> Q;

    Q.push({0,0});
    arr[0][0] = 1;

    while(!Q.empty()){
        pair<int,int> c = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x =c.X+dx[i];
            int y =c.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(maps[x][y] ==0 ||arr[x][y]!=-1)continue;
            arr[x][y] = arr[c.X][c.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<arr[n-1][m-1];
}