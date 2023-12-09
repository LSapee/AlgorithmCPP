#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;

    vector<string> arr;
    for(int i=0; i<n;i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    int ans=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            int cnt =0;
            if(arr[i][j]=='.'){
                arr[i][j]='*';
                Q.push({i,j});
                cnt++;
            }
            while(!Q.empty()){
                pair<int,int> cur =Q.front(); Q.pop();
                for(int z =0; z<4; z++){
                    int x= dx[z]+cur.X;
                    int y =dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]=='*')continue;
                    arr[x][y]='*';
                    cnt++;
                    Q.push({x,y});
                }
            }
            if(cnt!=0)ans = max(ans,cnt);
        }
    }
    cout<<ans;
}