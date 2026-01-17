#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int N,M,P;
vector<int> userMoveCnt;
vector<vector<char>> board;
vector<int> userLandCnt;
vector<queue<pair<int,int>>> userLands;
// 입력값 N x M칸의 격자를 만들기 위한 N,M
// P 플레이어의 수
// userMoveCnt 각 플레이어가 1턴에 몇칸씩 점령이 가능한지.
// 조건 1<= N,M <=1000
// 1<=P <= 9
// 1 <= userMoveCnt[i] <= 10^9  10억까지 이지만 N*M이 최대 100만이라 크게 신경쓸필요 없음.

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


void input(){
    cin>>N>>M>>P;
    userLandCnt.resize(P+1,0);
    for(int i=0; i<=P; i++){
        queue<pair<int,int>> Q;
        if(i==0){
            userMoveCnt.push_back(0);

        }else{
            int turn;cin>>turn;
            userMoveCnt.push_back(turn);
        }

        userLandCnt.push_back(0);
        userLands.push_back(Q);
    }
    for(int i=0; i<N; i++){
        vector<char> temp;
        for(int j=0; j<M; j++){
            char d;cin>>d;
            temp.push_back(d);
            if(d != '.' && d!= '#'){
                userLandCnt[d-'0']++;
                userLands[d-'0'].push({i,j});
            }
        }
        board.push_back(temp);
    }
}

bool check(){
    int cnt =0;
    for(int i=1; i<=P; i++)if(userLands[i].empty())cnt++;
    return cnt != P;
}

void userMove(int playerNum){
    auto &Q = userLands[playerNum];
    int moveCnt = userMoveCnt[playerNum];
    queue<pair<int,int>> Q2;
    while(moveCnt--){
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++) {
                int x = dx[i] + cur.X;
                int y = dy[i] + cur.Y;
                if (x < 0 || x >= N || y < 0 || y >= M)continue;
                if (board[x][y] == '.') {
                    board[x][y] = board[cur.X][cur.Y];
                    userLandCnt[playerNum]++;
                    Q2.push({x, y});
                }
            }
        }
        if(Q.empty())swap(Q,Q2);
        if(Q.empty())break;
    }
}

void solve(){
    while(check()){
        for(int i=1; i<=P; i++){
            userMove(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    for(int i=1; i<=P; i++)cout<<userLandCnt[i]<<" ";
    return 0;
}