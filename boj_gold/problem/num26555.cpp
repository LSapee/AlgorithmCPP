#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

using namespace std;

int T;
int n,m,checkPoints;

// 반환 0= 체크포인트값 반환 1,2 좌표
vector<int> bfs(vector<vector<char>> &arr,int point,pair<int,int> st,int stNum){
    int vis[n][m];
    fill(vis[0],vis[n],-1);
    queue<pair<int,int>> Q;
    vis[st.X][st.Y] =stNum;
    Q.push(st);
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='#'||vis[x][y]!=-1)continue;
            if(arr[x][y]-'0'==point+1){
                return {vis[cur.X][cur.Y]+1,x,y};
            }
            if(arr[x][y]=='E'&&point==checkPoints){
                return {vis[cur.X][cur.Y]+1,x,y};
            }
            vis[x][y]= vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    vector<int> temp;
    return temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;

    while(T--){
        cin>>n>>m>>checkPoints;
        vector<vector<char>> arr;
        pair<int,int> st;
        //미로 받기
        for(int i=0; i<n; i++){
            vector<char> temp;
            for(int j=0; j<m; j++){
                char k;cin>>k;
                if(k=='S')st = {i,j};
                temp.push_back(k);
            }
            arr.push_back(temp);
        }
        vector<int> ans;
        int stNum =0;
        for(int i=0;i<=checkPoints; i++) {
            ans = bfs(arr, i, st,stNum);
            st.X = ans[1];
            st.Y = ans[2];
            stNum= ans[0];
        }
        cout<<ans[0]<<"\n";
    }

}