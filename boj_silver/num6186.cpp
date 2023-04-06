#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    string mp[n];
    for(int i=0; i<n; i++){
        string s;cin>>s;
        mp[i]=s;
    }
    int count=0;
    for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
            queue<pair<int,int>> Q;
            if(mp[i][j]=='#'){
                count++;
                Q.push({i,j});
                mp[i][j]='.';
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x =cur.X + dx[z];
                    int y = cur.Y + dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(mp[x][y]!='#')continue;
                    mp[x][y] ='.';
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<count;
}