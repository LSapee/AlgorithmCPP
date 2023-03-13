#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};
int arr[1002][1002];
void bfs(int n, pair<int,int> knight){

    queue<pair<int,int>> Q;
    Q.push(knight);
    arr[knight.X][knight.Y]+1;
    while(!Q.empty()){
        pair<int,int> s = Q.front();Q.pop();
        for(int i=0; i<8; i++){
            int x = s.X+dx[i];
            int y = s.Y+dy[i];
            if(x<0||x>n||y<0||y>n)continue;
            if(arr[x][y]!=-1)continue;
            arr[x][y] = arr[s.X][s.Y]+1;
            Q.push({x,y});
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(arr[0],arr[1001],-1);
    int n,m;
    cin>>n>>m;
    //나이트 위치
    pair<int,int> knight;
    cin>>knight.X>>knight.Y;
    for(int i=0; i<m; i++){
        pair<int,int> mon;
        cin>>mon.X>>mon.Y;
      bfs(n,knight);
      cout<<arr[mon.X][mon.Y]+1<<" ";
    }
}