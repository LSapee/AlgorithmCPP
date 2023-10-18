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
    int n;cin>>n;

    while(n--){
        int a,b;cin>>a>>b;
        string arr[a];
        int num[a][b];
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                num[i][j] =0;
            }
        }
        for(int i=0;i<a;i++)cin>>arr[i];
        queue<pair<int,int>> Q;
        queue<pair<int,int>> G;
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if(arr[i][j]=='S')Q.push({i,j});
                if(arr[i][j]=='G')G.push({i,j});
            }
        }
        while(!Q.empty()){
            pair<int,int> cur =Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = cur.X+dx[i];
                int y = cur.Y+dy[i];
                if(x<0||x>=a||y<0||y>=b)continue;
                if(arr[x][y]=='X')continue;
                num[x][y] = num[cur.X][cur.Y]+1;
                arr[x][y] = 'X';
                Q.push({x,y});
            }
        }
        int ans = INT_MAX;
        while(!G.empty()){
            pair<int,int> goal = G.front(); G.pop();
            if(num[goal.X][goal.Y]!=0) ans = min(ans,num[goal.X][goal.Y]);
        }
        if(ans!=INT_MAX) cout<<"Shortest Path: "<<ans<<"\n";
        else cout<<"No Exit\n";
    }
}