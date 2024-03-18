#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int T;

void bfs(int n,int m){
    int sections =0;
    int spaces =0;
    vector<string> arr;
    for(int i=0; i<n; i++){
        string s; cin>>s; arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='#')continue;
            arr[i][j]='#';
            queue<pair<int,int>> Q;
            Q.push({i,j});
            sections++;
            spaces++;
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int a=0;a<4; a++){
                    int x = cur.X+dx[a];
                    int y = cur.Y+dy[a];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]=='#')continue;
                    arr[x][y] = '#';
                    spaces++;
                    Q.push({x,y});
                }
            }
        }
    }
    if(sections==1)cout<<sections<<" section, ";
    else cout<<sections<<" sections, ";
    if(spaces==1)cout<<spaces<<" space";
    else cout<<spaces<<" spaces";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        int n,m;cin>>n>>m;
        bfs(n,m);
    }
}