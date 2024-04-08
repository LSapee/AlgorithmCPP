#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int n,m,T;

vector<vector<int>> arr;

int bfs(){
    int cnt =0;
    queue<pair<int,int>> Q;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==255){
                cnt++;
                Q.push({i,j});
                arr[i][j] =0;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z = 0; z<4; z++){
                    int x = dx[z]+cur.X;
                    int y = dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]==0)continue;
                    arr[x][y] = 0;
                    Q.push({x,y});
                }
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int R,G,B;cin>>R>>G>>B;
            temp.push_back((R+G+B)/3);
        }
        arr.push_back(temp);
    }
    cin>>T;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = arr[i][j]>= T ? 255: 0;
        }
    }
    int ans = bfs();
    cout<<ans;

}