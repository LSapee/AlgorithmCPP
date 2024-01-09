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

    int n; cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    queue<pair<int,int>> Q;
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]=='*'){
                Q.push({i,j});
                arr[i][j]='.';
                cnt++;
            }
            while(!Q.empty()){
                pair<int,int> cur =Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x =dx[z]+cur.X;
                    int y =dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=n)continue;
                    if(arr[x][y]=='.')continue;
                    arr[x][y]='.';
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<cnt;
}