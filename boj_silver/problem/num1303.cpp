#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

string s[101];

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        string ss;
        cin>>ss;
        s[i] = ss;
    }

    int w=0,b=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            queue<pair<int,int>> Q;
            queue<pair<int,int>> Q2;
            int W=0,B=0;
            if(s[i][j]== 'W') {
                Q.push({i,j});
                s[i][j] = 'X';
                W=1;
            }
            if(s[i][j]== 'B') {
                Q2.push({i,j});
                s[i][j] = 'X';
                B=1;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X + dx[z];
                    int y = cur.Y + dy[z];
                    if(x<0||x>=m||y<0||y>=n)continue;
                    if(s[x][y]!='W')continue;
                    s[x][y] = 'X';
                    W++;
                    Q.push({x,y});
                }
            }
            while(!Q2.empty()){
                pair<int,int> cur = Q2.front(); Q2.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X + dx[z];
                    int y = cur.Y + dy[z];
                    if(x<0||x>=m||y<0||y>=n)continue;
                    if(s[x][y]!='B')continue;
                    s[x][y] = 'X';
                    B++;
                    Q2.push({x,y});
                }
            }
            w += (W*W);
            b += (B*B);
        }
    }
    cout<<w<<" "<<b;
}