#include <bits/stdc++.h>
#define X first
#define Y second

int dx[8] {0,1,1,1,0,-1,-1,-1,};
int dy[8] {1,1,0,-1,-1,-1,0,1};
using namespace std;

string s[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string ss; cin>>ss;
        s[i]=ss;
    }
    int count =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            if(s[i][j]=='#'){
                Q.push({i,j});
                s[i][j]='.';
                count++;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<8; z++){
                    int x = cur.X+dx[z];
                    int y = cur.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(s[x][y]!='#')continue;
                    Q.push({x,y});
                    s[x][y] = '.';
                }
            }
        }
    }
    cout<<count;
}
