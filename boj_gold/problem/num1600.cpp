#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int Hx[8] = {1,2,2,1,-1,-2,-2,-1};
int Hy[8] = {2,1,-1,-2,-2,-1,1,2};


// 이동 경로를 저장할 배열
vector<vector<vector<int>>> arr;
// 주어진 격자
int monkeyMap[201][201];

int N,M,K;

struct T{
    int x;
    int y;
    int z;
};

void move4(queue<T> &Q,T cur){
    for(int i=0; i<4; i++){
        int x = dx[i]+cur.x;
        int y = dy[i]+cur.y;
        if(x<0||x>=N||y<0||y>=M)continue;
        if(arr[cur.z][x][y] !=-1 ||monkeyMap[x][y]==1)continue;
        arr[cur.z][x][y] = arr[cur.z][cur.x][cur.y]+1;
        Q.push({x,y,cur.z});
    }
}

void move8(queue<T> &Q,T cur){
    for(int i=0; i<8; i++){
        int x = Hx[i]+cur.x;
        int y = Hy[i]+cur.y;
        int z = cur.z+1;
        if(x<0||x>=N||y<0||y>=M||z>K)continue;
        if(arr[z][x][y]!=-1 || monkeyMap[x][y] == 1)continue;
        arr[z][x][y] = arr[cur.z][cur.x][cur.y]+1;
        Q.push({x,y,z});
    }
}

void bfs(){
    queue<T> Q;
    Q.push({0,0,0});
    arr[0][0][0] =0;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        move4(Q,cur);
        move8(Q,cur);
    }
}


void input(){
    cin>>K>>M>>N;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin>>monkeyMap[i][j];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    arr.resize(K+1,vector<vector<int>>(N,vector<int>(M,-1)));
    bfs();
    int ans =INT_MAX;
    for(int i=0; i<=K; i++) {
        if(arr[i][N-1][M-1]!=-1) ans = min(ans,arr[i][N-1][M-1]);
    }
    if(ans==INT_MAX) cout<<-1;
    else cout<<ans;

    return 0;
}