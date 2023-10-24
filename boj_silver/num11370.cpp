#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        string arr[m];
        for(int i=0; i<m; i++)cin>>arr[i];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                queue<pair<int,int>> Q;
                if(arr[i][j]=='S') Q.push({i,j});
                while(!Q.empty()){
                    pair<int,int> cur = Q.front();Q.pop();
                    for(int z=0; z<4; z++){
                        int x =cur.X+dx[z];
                        int y =cur.Y+dy[z];
                        if(x<0||x>=m||y<0||y>=n)continue;
                        if(arr[x][y]=='S'||arr[x][y]=='.')continue;
                        arr[x][y] = 'S';
                        Q.push({x,y});
                    }
                }
            }
        }
        for(int i=0; i<m; i++)cout<<arr[i]<<"\n";

    }
}