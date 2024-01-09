#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {1,1,0,-1,-1,-1,0,1};
int dy[8] = {0,-1,-1,-1,0,1,1,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    string Sheba[n];
    for(int i=0; i<n; i++)cin>>Sheba[i];
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            if(Sheba[i][j]=='#'){
                Q.push({i,j});
                cnt++;
                Sheba[i][j]='.';
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int i=0; i<8; i++){
                    int x = cur.X+dx[i];
                    int y = cur.Y+dy[i];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(Sheba[x][y]=='.')continue;
                    Sheba[x][y]='.';
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<cnt;
}