#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
string M[51];
int D[51][51];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    fill(D[0],D[51],-1);
    pair<int,int> start;
    queue<pair<int,int>> Q;
    for(int i=0;i<n;i++){
        cin>>M[i];
        for(int j=0; j<m; j++){
            if(M[i][j]=='*'){Q.push({i,j}); D[i][j]=0;}
            if(M[i][j]=='S'){start = {i,j};}
        }
    }
//    물 지나갑니다.
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n ||y<0 || y>= m)continue;
            if(M[x][y]=='X'||M[x][y]=='D'||D[x][y] !=-1) continue;
            D[x][y] = D[cur.X][cur.Y] +1;
            Q.push({x,y});
        }
    }
//    확인용
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<D[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    Q.push(start);
    D[start.X][start.Y] =0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n ||y<0 || y>= m)continue;
            if(M[x][y]=='D') {cout<<D[cur.X][cur.Y] +1; return 0;}
            if(M[x][y]=='X'|| (D[x][y] !=-1&& D[x][y]<=D[cur.X][cur.Y] +1) ) continue;
            D[x][y] = D[cur.X][cur.Y] +1;
            Q.push({x,y});
        }
    }
    cout<<"KAKTUS";
}

