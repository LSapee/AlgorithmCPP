#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int>> J;
    queue<pair<int,int>> F;
    int n,m; cin>>n>>m;
    int ji[n][m];
    string mi[n];
    //배열 초기화
    fill(ji[0],ji[n],-1);
    for(int i=0; i<n;i++)cin>>mi[i];
    //지훈이의 위치와 불의 위치 찾기 *불은 여러개 있을 수 있다. 그래서 중간에 포문을 멈추지 않는다.
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mi[i][j]=='J'){
                // 지훈이가 외각에서 시작하면 불이 어떻게 번지던 바로 탈출 가능함.
                if(i==0||i==n-1||j==0||j==m-1){
                    cout<<1;
                    return 0;
                }
                J.push({i,j});
                ji[i][j]=1;
            }
            if(mi[i][j]=='F'){
                F.push({i,j});
                ji[i][j]=1;
            }
        }
    }
    // 불을 먼저 진행시킴! 불이 번진칸에는 지훈이는 갈 수 없기 때문에!
    while(!F.empty()){
        pair<int,int> cur = F.front(); F.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(mi[x][y]=='#'||ji[x][y]!=-1)continue;
            ji[x][y] = ji[cur.X][cur.Y]+1;
            F.push({x,y});
        }
    }
    //지훈이의 이동 시작
    while(!J.empty()){
        pair<int,int> cur = J.front(); J.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m||mi[x][y]=='#')continue;
            if(ji[x][y]!=-1){
//                불이 지훈이가 가는 시간보다 빨리 x,y칸에 번지면 지훈이는 해당칸을 이용못하므로 다른경로를 탐색
                if(ji[x][y] <=ji[cur.X][cur.Y]+1)continue;
            }
            ji[x][y] = ji[cur.X][cur.Y]+1;
            if(x==0 || y==m-1||x==n-1||y==0){
                // 지훈이가 탈출 가능한 칸에 도착하면 출력하고 프로그램 종료
                // queue 특성상 가장 빨리 해당 조건에 도달한 경우가 젤 빠른경우다.
                cout<<ji[x][y];
                return 0;
            }
            J.push({x,y});
        }
    }
    //while문이 다 돌아도 프로그램이 종료 되지 않았다면 지훈이는 탈출할 수 없었다고 보고  "IMPOSSIBLE"을 출력
    cout<<"IMPOSSIBLE";
}
