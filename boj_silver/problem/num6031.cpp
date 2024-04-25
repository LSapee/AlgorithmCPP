#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] ={0,1,1,1,0,-1,-1,-1};
int dy[8] ={1,1,0,-1,-1,-1,0,1};

int n,m;
vector<string> arr;
int bfs(int stx,int sty){
    queue<pair<int,int>> Q;
    Q.push({stx,sty});
    int cnt =1;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<8; i++){
            int x =cur.X +dx[i];
            int y = cur.Y +dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]!='.')continue;
            arr[x][y]='*';
            Q.push({x,y});
            cnt++;
        }
    }
    return cnt;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr.push_back(s);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='.'){
                arr[i][j]='*';
                ans = max(bfs(i,j),ans);
            }else continue;
        }
    }
    cout<<ans;
}
