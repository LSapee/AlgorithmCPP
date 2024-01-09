#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
vector<vector<int>> arr;
vector<vector<int>> arr2;
int vis[30][30];
bool bfs(int a,int b){
    int f= arr[a][b];
    int s= arr2[a][b];
    queue<pair<int,int>> Q;
    Q.push({a,b});
    arr[a][b]= s;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x= cur.X +dx[i];
            int y = cur.Y +dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]!=f)continue;
            arr[x][y] = s;
            Q.push({x,y});
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]!=arr2[i][j])return false;
        }
    }
    return true;
}
bool start(){
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(arr[i][j]!=arr2[i][j]){
                return bfs(i,j);
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    //백신 전
    for(int i=0;i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int k;cin>>k;
            temp.push_back(k);
        }
        arr.push_back(temp);
    }
    //백신 후
    for(int i=0;i<n; i++){
        vector<int> temp;
        for(int j=0; j<m; j++){
            int k;cin>>k;
            temp.push_back(k);
        }
        arr2.push_back(temp);
    }
    bool ok = start();
    if(ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}