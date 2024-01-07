#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
vector<vector<int>> arr;
vector<pair<int,int>> virus;

bool check[10];
int ans = INT_MAX;
int test[50][50];
// 탐색 하여 바이러스 터지는 시간 계산

/*
 * 4 2 반례 답 1
2 1 2 2
2 1 1 1
2 1 1 2
0 2 2 2
 * */
int bfs(){
    fill(test[0],test[50],-1);
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==2) {
                Q.push({i, j});
                test[i][j] = 0;
            }else if(arr[i][j]==1){
                test[i][j] =-2;
            }else {
                test[i][j]=-1;
            }
        }
    }
    int ax =INT_MIN;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(test[x][y]==-2)continue;
            if(test[x][y]!=-1)continue;
            test[x][y] = test[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==-3)continue;
            if(test[i][j]==-1) return -1;
            ax =max(ax,test[i][j]);
        }
    }
    return ax;
}
// 바이러스 넣어주기
void dfs(int t, int index){
    if(t==m){
        int k = bfs();
        if(k==-1) return ;
        ans = min(ans,k);
        return ;
    }
    for(int i=index; i<virus.size(); i++){
        if(check[i])continue;
        int x  = virus[i].X;
        int y = virus[i].Y;
        arr[x][y] = 2;
        check[i] =true;
        dfs(t+1,i+1);
        arr[x][y] = -3;
        check[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    // 지도 배치
    bool ok = true;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int k; cin>>k;
            if(k==0) ok=false;
            // 바이러스를 놓을 수 있는 공간
            if(k==2){
                virus.push_back({i,j});
                k=-3;
            }
            temp.push_back(k);
        }
        arr.push_back(temp);
    }

    if(ok){cout<<0;return 0;}
    for(int i=0; i<virus.size(); i++)dfs(0,i);

    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
}
