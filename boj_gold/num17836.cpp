#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

//시계방향 회전
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[101][101];
int warrior[101][101];
int gram[101][101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,T;
    pair<int,int> gcur;
    bool so =false;
    cin>>n>>m>>T;
    fill(&warrior[0][0],&warrior[101][101],-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int k;
            cin>>k;
            arr[i][j] = k;
        }
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    warrior[0][0] =0;
    queue<pair<int,int>> G;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n ||y<0||y>=m)continue;
            if(arr[x][y] == 1 || warrior[x][y]>-1) continue;
            if(arr[x][y] == 2){
                gcur={x,y};
                G.push({x,y});
                gram[x][y]=0;
                so=true;
            }
            warrior[x][y] = warrior[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    while(!G.empty()){
        pair<int,int> cur = G.front();G.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n ||y<0||y>=m)continue;
            if(gram[x][y]>0) continue;
            gram[x][y] = gram[cur.X][cur.Y]+1;
            G.push({x,y});
        }
    }
    gram[gcur.X][gcur.Y] = 0;

//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<warrior[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//그람을 발견했을때
// 1. 그람을 찾고 벽 뚤고 갔을 때
// 2. 그람을 찾지 않고 그냥 갔을 때
// 3. 1,2번이 둘다 T이내일경우
// 3-1 1,2번중 빠르게 간 경우를 호출
    if(so){
        int gp = warrior[gcur.X][gcur.Y]+gram[n-1][m-1];
        int end = warrior[n-1][m-1];
        if(end==-1){
//            벽을 뚫지 않고 찾아가지 못할때
            if(gp<=T){
                cout<<gp;
            }else{
                cout<<"Fail";
            }
        }else{
//            벽 뚤없이도 찾아갈 때
            if(gp<=T && end<=T){
                if(gp<=end){
                    cout<<gp;
                }else{
                    cout<<end;
                }
            }else if(gp<=T){
                cout<<gp;
            }else if(end<=T){
                cout<<end;
            }else{
                cout<<"Fail";
            }
        }
//        그람을 발견 못 했을 때
    }else{
        if(warrior[n-1][m-1]==-1||warrior[n-1][m-1]>T){
            cout<<"Fail";
        }else{
            cout<<warrior[n-1][m-1];
        }
    }


}