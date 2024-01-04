#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
//빙산이 있는 지도
vector<vector<int>> iceberg;
//빙산
vector<pair<int,int>> arr;
bool vis[301][301];
//
int ans =0;
// 빙산이 몇 개 인지 세기
int cntIceberg(){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<iceberg[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    arr.clear();
    fill(vis[0],vis[300],false);
    int cnt =0;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(iceberg[i][j]!=0&&!vis[i][j]){
               cnt++;
               vis[i][j]=true;
               arr.push_back({i,j});
               Q.push({i,j});
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x = dx[z]+cur.X;
                    int y = dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(vis[x][y]||iceberg[x][y]==0)continue;
                    vis[x][y] = true;
                    arr.push_back({x,y});
                    Q.push({x,y});
                }
            }
            if(cnt>1) return 2;
        }
    }
    return cnt;
}

//
void timeOut(){
    fill(vis[0],vis[300],false);
    for(int i=0; i<arr.size(); i++){
        vis[arr[i].X][arr[i].Y] = true;
        int cnt =0;
        for(int j=0; j<4; j++){
            int x =arr[i].X +dx[j];
            int y =arr[i].Y +dy[j];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(vis[x][y]||iceberg[x][y]!=0)continue;
            cnt++;
        }
        iceberg[arr[i].X][arr[i].Y]-=cnt;
        if(iceberg[arr[i].X][arr[i].Y]<0)iceberg[arr[i].X][arr[i].Y]=0;
    }
    ans++;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    // 현재 빙산 받아오기
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int a;cin>>a;
            temp.push_back(a);
            if(a!=0) arr.push_back({i,j});
        }
        iceberg.push_back(temp);
    }
    while(1){
        timeOut();
        int k =cntIceberg();
        if(k>1) break;
        if(k==0){
            cout<<0;
            return 0;
        }
    }
    cout<<ans;
    return 0;
}
