#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int k;
            cin>>k;
            arr[i][j] = k;
        }
    }

    int paintcount=0,MX=0;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1){
                Q.push({i,j});
                arr[i][j] =2;
                paintcount++;
            }else{
                continue;
            }
            int count = 0;
            while(!Q.empty()){
                count++;
                pair<int,int> cur = Q.front(); Q.pop();

                for(int b=0; b<4; b++){
                    int x =cur.X +dx[b];
                    int y =cur.Y +dy[b];
                    if(x<0 || x>=n ||y<0 || y>=m) continue;
                    if(arr[x][y]!=1) continue;
                    arr[x][y] = 2;
                    Q.push({x,y});
                }
            }
            MX=max(count,MX);
        }
    }
    cout<<paintcount<<"\n";
    cout<<MX;
}