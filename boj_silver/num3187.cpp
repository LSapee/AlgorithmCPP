#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
using namespace std;

string arr[251];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr[i] = s;
    }
    int w=0, s=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            queue<pair<int,int>> Q;
            int S=0,W=0;
            if(arr[i][j]=='#')continue;
            if(arr[i][j]!='#')Q.push({i,j});
            if(arr[i][j]=='k')S++;
            if(arr[i][j]=='v')W++;
            arr[i][j]='#';
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0;z<4;z++){
                    int x = cur.X+dx[z];
                    int y = cur.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]=='#')continue;
                    if(arr[x][y]=='k')S++;
                    if(arr[x][y]=='v')W++;
                    arr[x][y]='#';
                    Q.push({x,y});
                }
            }
            if(S>W){
                W=0;
            }else{
               S=0;
            };
            w+=W;
            s+=S;
        }
    }
cout<<s<<" "<<w;

}
