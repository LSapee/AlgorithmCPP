#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    vector<string> arr;
    vector<string> ans;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        string s;cin>>s;
        ans.push_back(s);
    }
    bool vis[n][m];
    fill(vis[0],vis[n],false);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char a,ad;
            queue<pair<int,int>> Q;
            if(!vis[i][j]){
                vis[i][j] =true;
                a= arr[i][j];
                ad= ans[i][j];
                Q.push({i,j});
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x = dx[z]+cur.X;
                    int y = dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(vis[x][y]||arr[x][y]!=a)continue;
                    if(arr[x][y]==a &&ans[x][y]!=ad){
                        cout<<"NO";
                        return 0;
                    }
                    vis[x][y] = true;
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<"YES";
}