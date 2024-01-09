#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

//시계방향 이동
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
//    테스트 횟수 입력받기
    cin>>n;
    for(int i=0; i<n; i++){
        int w,h; cin>>w>>h;
        int sang[h][w];
        string mi[h];
        queue<pair<int,int>> J;
        queue<pair<int,int>> F;
        bool ok =false;
        //배열 초기화
        fill(sang[0],sang[h],-1);
        for(int j=0; j<h;j++)cin>>mi[j];
        for(int j=0; j<h; j++){
            for(int k=0; k<w; k++){
                if(mi[j][k]=='@'){
                    // 상근이가 외각에서 시작하면 불이 어떻게 번지던 바로 탈출 가능함.
                    // 상근이가 탈출했다는 의미로 ok를 true로
                    if(j==0||j==h-1||k==0||k==w-1){
                        cout<<1<<"\n";
                        ok=true;
                    }
                    J.push({j,k});
                    sang[j][k]=1;
                }
                if(mi[j][k]=='*'){
                    F.push({j,k});
                    sang[j][k]=1;
                }
            }
        }
        //상근이가 바로 탈출가능할 경우 추가로 진행없이 다음 테스트 케이스 진행
        if(ok)continue;
        // 불을 먼저 진행시킴! 불이 번진칸에는 상근이는 갈 수 없기 때문에!
        while(!F.empty()){
            pair<int,int> cur = F.front(); F.pop();
            for(int j=0; j<4; j++){
                int x = cur.X+dx[j];
                int y = cur.Y+dy[j];
                if(x<0||x>=h||y<0||y>=w)continue;
                if(mi[x][y]=='#'||mi[x][y]=='@'||sang[x][y]!=-1)continue;
                sang[x][y] = sang[cur.X][cur.Y]+1;
                F.push({x,y});
            }
        }
        //상근이의 이동 시작
        while(!J.empty()){
            pair<int,int> cur = J.front(); J.pop();
            for(int j=0; j<4; j++){
                int x = cur.X+dx[j];
                int y = cur.Y+dy[j];
                if(x<0||x>=h||y<0||y>=w)continue;
                if(mi[x][y]=='#'||mi[x][y]=='*')continue;
                if(sang[x][y]!=-1){
                    if(sang[x][y] <=sang[cur.X][cur.Y]+1)continue;
                }
                sang[x][y] = sang[cur.X][cur.Y]+1;
                if(x==0 ||x==h-1|| y==0||y==w-1){
                    // 상근이가 탈출 가능한 칸에 도착하면 ok를 true로 변경하고 결과값을 출력
                    cout<<sang[x][y]<<"\n";
                    ok = true;
                }
                if(ok){
                    //상근이는 탈출했기때문에 추가 경로 탐색 필요 없음
                    while(!J.empty())J.pop();
                    break;
                }
                J.push({x,y});

            }
        }
        //상근이가 탈출하면 추가 케이스 진행
        if(ok)continue;
        //상근이가 탈출하지 못하면 IMPOSSIBLE을 출력
       cout<<"IMPOSSIBLE\n";
    }
    return 0;
}
