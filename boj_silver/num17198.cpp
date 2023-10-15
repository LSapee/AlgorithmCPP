#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int ans[10][10];

int dx[4] = {0,1,0,-1};
int dy[4] ={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string arr[10];
    for(int i=0; i<10; i++) cin>>arr[i];
    queue<pair<int,int>> Q;
    int a=14,b=14;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(arr[i][j]=='B'){a=i;b=j;}
            if(arr[i][j]=='L')Q.push({i,j});
        }
        if(!Q.empty()&&a!=14)break;
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=10||y<0||y>=10)continue;
            if(arr[x][y]=='R'||ans[x][y]!=0)continue;
            ans[x][y] = ans[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<ans[a][b]-1;
}