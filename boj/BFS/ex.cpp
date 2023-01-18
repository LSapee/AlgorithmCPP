#include <bits/stdc++.h>
using namespace std;
// define를 쓴 이유는 pair을 좀더 간단하게 사용하고 싶어서
#define X first
#define Y second
//board는 전체 판
int board[502][502] = {};
// vis는 방문했던 칸
bool vis[502][502];
//행과 열의 갯수
int n=7, m=10;
//반시계 방향
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
//  시작위치 추가
    queue<pair<int,int>> Q;
    vis[0][0] =1;
    Q.push({0,0});
//  탐색 시작
    while(!Q.empty()){
        pair<int ,int> cur = Q.front(); Q.pop();
        cout<< '('<<cur.X << ", " <<cur.Y <<") ->";
        for( int dir =0; dir<4; dir++){
            int nx = cur.X +dx[dir];
            int ny = cur.Y +dy[dir];
            if(nx< 0 || nx>=n ||ny<0|| ny>=m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({nx,ny});
        }
    }

}