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
            }
        }
    }
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(test[x][y]==-2||test[x][y]!=-1)continue;
            test[x][y] = test[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    int re =-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(test[i][j]==-1) return -1;
            re = max(re,test[i][j]);
        }
    }
    return re;
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
        arr[x][y] =0;
        check[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    // 지도 배치
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int k; cin>>k;
            // 바이러스를 놓을 수 있는 공간
            if(k==2){
                virus.push_back({i,j});
                k=0;
            }
            temp.push_back(k);
        }
        arr.push_back(temp);
    }

    for(int i=0; i<virus.size(); i++)dfs(0,i);

    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
}
