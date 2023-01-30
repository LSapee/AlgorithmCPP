#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int F[1005][1005];
int P[1005][1005];

//시계방향으로 3시부터 회전
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
//    테스트 횟수 입력받기
    cin>>n;

    for(int i=0; i<n; i++){
        int w,h;
        cin>>w>>h;
        string arr[h];
        queue<pair<int,int>> p;//사람 좌표를 넣을 큐
        queue<pair<int,int>> f;//불 좌표를 넣을 큐
        fill(F[0],F[1005],-1);
        fill(P[0],P[1005],-1);

//      배열에 값 입력
        for(int j=0; j<h; j++){
            cin>>arr[j];
            for(int k=0; k<w; k++) {
                if (arr[j][k] == '@') {
                    p.push({j, k});
                    P[j][k] = 0;
                }else if(arr[j][k]=='*'){
                    f.push({j,k});
                    F[j][k] = 0;
                }
            }
        }
//        불 확장
        while(!f.empty()){
            pair<int,int> cur = f.front();f.pop();
            for(int j=0; j<4; j++){
                int x = cur.X+dx[j];
                int y = cur.Y+dy[j];
                if(x<0||x>=h ||y<0||y>=w)continue;
                if(arr[x][y]=='#' || F[x][y]!=-1)continue;
                F[x][y] = F[cur.X][cur.Y]+1;
                f.push({x,y});
            }
        }
//        상근이 탈출하자
        bool die = false;
        while(!p.empty() && !die){
            pair<int,int> cur = p.front();p.pop();
            if(cur.X==0 || cur.X==h-1||cur.Y==0||cur.Y==w-1 ){
                if(F[cur.X][cur.Y]!=-1){
                    if(P[cur.X][cur.Y]<=F[cur.X][cur.Y]){
                        cout<<P[cur.X][cur.Y]+1<<"\n";
                        die=true;
                        break;
                    }
                }else{
                    cout<<P[cur.X][cur.Y]+1<<"\n";
                    die=true;
                    break;
                }
            }
            for(int j=0; j<4; j++){
                int x = cur.X+dx[j];
                int y = cur.Y+dy[j];
                if(x<0||x>=h ||y<0||y>=w)continue;
                if(arr[x][y]=='*'|| arr[x][y]=='#' || P[x][y]!=-1)continue;
                P[x][y] = P[cur.X][cur.Y]+1;
                if(x==0 || x==h-1 || y==0 ||y==w-1){
                    if(F[x][y]!=-1){
                        if(P[x][y] <=F[x][y]){
                            cout<<P[x][y]+1<<"\n";
                            die=true;
                            break;
                        }
                    }else{
                        cout<<P[x][y]+1<<"\n";
                        die=true;
                        break;
                    }

                }
                p.push({x,y});
            }
        }
        if(die) continue;
       cout<<"IMPOSSIBLE\n";
    }
}