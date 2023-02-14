#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    string s[n];
    for(int i=0; i<n; i++){
        string ss;
        cin>>ss;
        s[i] =ss;
    }

    int sheep=0,wolf=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            int sp =0;
            int wf =0;
            if(s[i][j]!= '#'){
                if(s[i][j]=='v') wf=1;
                if(s[i][j]=='o') sp=1;
                Q.push({i,j});
                s[i][j] = '#';
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); Q.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X + dx[z];
                    int y = cur.Y + dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(s[x][y]=='#')continue;
                    if(s[x][y]== 'v') wf++;
                    if(s[x][y]=='o') sp++;
                    Q.push({x,y});
                    s[x][y] = '#';
                }
            }
            if(sp>wf) wf=0;
            if(sp<=wf) sp =0;
            sheep+=sp;
            wolf+= wf;
        }
    }
    cout<<sheep<<" "<<wolf;
}
