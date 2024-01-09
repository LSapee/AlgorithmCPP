#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

// n*m의 지도
// a*b의 크기 유닛 a,b= 최대 10
// o는 장애물의 위치
int n,m,a,b,o;
int arr[501][501];
bool check(int x,int y){
    for(int i=x; i<x+a; i++){
        if(i>=n) return false;
        for(int j=y; j<y+b; j++){
            if(j>=m)return false;
            if(arr[i][j]==-1) return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>a>>b>>o;
    bool vis[n+1][m+1];
    fill(vis[0],vis[n+1],false);
    // 배열 초기화
    for(int i=0; i<o; i++){
        int o1,o2;cin>>o1>>o2;
        arr[o1-1][o2-1] =-1;
    }
    int st1,st2;cin>>st1>>st2;
    int ed1,ed2;cin>>ed1>>ed2;
    queue<pair<int,int>> Q;
    Q.push({st1-1,st2-1});
    vis[st1-1][st2-1] =true;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X +dx[i];
            int y = cur.Y +dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(!check(x,y)||vis[x][y])continue;
            vis[x][y] =true;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }

    if(arr[ed1-1][ed2-1]==0)cout<<-1;
    else cout<<arr[ed1-1][ed2-1];
    return 0;
}