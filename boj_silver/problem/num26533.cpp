#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[2] ={0,1};
int dy[2] ={1,0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    string s[n];
    for(int i=0; i<n; i++)cin>>s[i];
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0; j<n; j++)
            arr[i][j]=0;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    arr[0][0]=1;
    while(!Q.empty()){
        pair<int,int> cur =Q.front();Q.pop();
        for(int i=0; i<2; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x>=n||y>=n)continue;
            if(arr[x][y]==1||s[x][y]=='x')continue;
            arr[x][y] = 1;
            Q.push({x,y});
        }
    }
    if(arr[n-1][n-1]==0) cout<<"No";
    else cout<<"Yes";
}