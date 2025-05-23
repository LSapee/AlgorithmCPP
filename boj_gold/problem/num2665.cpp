#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int N;
//미로
vector<vector<int>> miro;

queue<pair<int,int>> go(queue<pair<int,int>> &Q){
    queue<pair<int,int>> temp;
    while(!Q.empty()){
        auto cur =Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=N||y<0||y>=N)continue;
            if(miro[x][y]==-1){
                miro[x][y] = miro[cur.X][cur.Y];
                Q.push({x,y});
            }else if(miro[x][y]==-5){
                miro[x][y] =miro[cur.X][cur.Y]+1;
                temp.push({x,y});
            }
        }
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;

    for(int i=0; i<N; i++){
        string s; cin>>s;
        vector<int> temp;
        for(int j=0; j<N; j++){
            if(s[j]=='1') temp.push_back(-1);
            else temp.push_back(-5);
        }
        miro.push_back(temp);
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    miro[0][0] = 0;
    while(miro[N-1][N-1]==-1 ||miro[N-1][N-1]==-5){
        Q= go(Q);
    }
    cout<<miro[N-1][N-1];
    return 0;
}