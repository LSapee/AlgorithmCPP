#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;


int bfs(vector<vector<int>> arr){
    bool vis[8][8];
    vector<vector<int>>arr2 = arr;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            vis[i][j] =false;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            if(arr2[i][j]==2){
                vis[i][j] = true;
                Q.push({i,j});
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x =dx[z]+cur.X;
                    int y = dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(vis[x][y]||arr2[x][y]==1)continue;
                    arr2[x][y]=2;
                    vis[x][y]=true;
                    Q.push({x,y});
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr2[i][j]==0)cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++){
        vector<int> k;
        for(int j=0; j<m; j++){
            int a;cin>>a;
            k.push_back(a);
        }
        arr.push_back(k);
    }
    vector<pair<int,int>> zero;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==0){
                zero.push_back({i,j});
           }
        }
    }
    int ans =INT_MIN;
    for(int i=0; i<zero.size()-2; i++){
        arr[zero[i].X][zero[i].Y]=1;
        for(int j=i+1; j<zero.size()-1; j++){
            arr[zero[j].X][zero[j].Y] =1;
            for(int k=j+1; k<zero.size(); k++){
                arr[zero[k].X][zero[k].Y] =1;
                ans = max(bfs(arr),ans);
                arr[zero[k].X][zero[k].Y] =0;
            }
            arr[zero[j].X][zero[j].Y] =0;
        }
        arr[zero[i].X][zero[i].Y] =0;
    }
    cout<<ans;

}