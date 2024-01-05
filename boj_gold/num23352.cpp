#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
int cnt =0;
int cnt2 =0;
vector<vector<int>> arr;
int room[51][51];

pair<int,int> bfs(int a,int b){
    fill(room[0],room[51],-1);
    queue<pair<int,int>> Q;
    Q.push({a,b});
    room[a][b] =0;
    int ans =INT_MIN;
    while(!Q.empty()){
        pair<int,int> cur =Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]==0||room[x][y]!=-1)continue;
            room[x][y]=room[cur.X][cur.Y]+1;
            cnt =max(room[x][y],cnt);
            Q.push({x,y});
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(room[i][j]==cnt) ans= max(ans,arr[i][j]+arr[a][b]);
        }
    }
//    cout<<"cnt : "<<cnt<<" ans : "<<ans<<"\n";
    return {cnt,ans};

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int a;cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    int ans = INT_MIN;
    pair<int,int> ansPair = {0,0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0)continue;
            pair<int,int> k = bfs(i,j);
            if(k.X>ansPair.X){
                ansPair.X= k.X;
                ans = k.Y;
            }else if(k.X==ansPair.X){
                ans = max(ans,k.Y);
            }
        }
    }
    if(ans==INT_MIN) ans= 0;
    cout<<ans;
}