#include <bits/stdc++.h>
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

// 11로 시작하는 이유 0번째는 벽을 부수지 않아도 돌아 다닐 수 있다. 최대 1100만 칸을 채우면 끝난다
int arr[2][11][1000][1000];
vector<string> inputMap;

int N,M,K;
struct T{
    int x;
    int y;
    int z;
    int d; //낮은 0 밤은 1
};
void input(){
    cin>>N>>M>>K;
    for(int i=0; i<N; i++){
        string s;cin>>s;
        inputMap.push_back(s);
    }
}
void moveOnly(queue<T> &Q, T cur){ // 벽을 부수지 못하는 이동
    for(int i=0; i<4; i++){
        int x = dx[i]+cur.x;
        int y = dy[i]+cur.y;
        int d = cur.d == 0 ?1:0;
        if(x<0||x>=N||y<0||y>=M)continue;
        if(arr[d][cur.z][x][y] !=0 || inputMap[x][y] =='1')continue;
        arr[d][cur.z][x][y] = arr[cur.d][cur.z][cur.x][cur.y] +1;
        Q.push({x,y,cur.z,d});
    }
}
void breakAndMove(queue<T> &Q, T cur){ // 벽을 부수면서 이동.
    if(cur.d == 1)return ;
    for(int i=0; i<4; i++){
        int x = dx[i]+cur.x;
        int y = dy[i]+cur.y;
        int z = cur.z + 1;
        int d = 1; // 벽을 부수면 무조껀 밤으로
        if(x<0||x>=N||y<0||y>=M||z>K)continue;
        if(arr[d][z][x][y]!=0)continue;
        arr[d][z][x][y] = arr[cur.d][cur.z][cur.x][cur.y]+1;
        Q.push({x,y,z,d}); //무조껀 낮에 벽을 부수기에
    }
}
void stopAndWaitAfternoon(queue<T> &Q, T cur){
    int d = 0; //밤일때만 기다리니 기다린 후는 무조껀 낮으로.
    int x = cur.x;
    int y = cur.y;
    int z = cur.z;
    if(x==N-1&&y==M-1) return ; // 이미 도착지점인데 저녁이라 이동 못 했을때 패스
    if(arr[d][z][x][y] != 0) return ;
    arr[d][z][x][y] = arr[cur.d][cur.z][cur.x][cur.y]+1;
    Q.push({x,y,z,d});
}

void bfs(){
    queue<T> Q;
    Q.push({0,0,0,0});
    arr[0][0][0][0] = 1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        moveOnly(Q,cur);
        if(cur.d == 1)stopAndWaitAfternoon(Q,cur); //이동을 못했고 현재 저녁이라 벽을 부술 수 없어서 기다려야 하는 상황일때.
        if(cur.d == 0)breakAndMove(Q,cur);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    bfs();
    int ans =INT_MAX;
    for(int i=0; i<=K; i++) {
        if(arr[0][i][N-1][M-1] !=0)ans= min(ans,arr[0][i][N-1][M-1]);
        if(arr[1][i][N-1][M-1] !=0)ans= min(ans,arr[1][i][N-1][M-1]);
    }

    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    return 0;
}

