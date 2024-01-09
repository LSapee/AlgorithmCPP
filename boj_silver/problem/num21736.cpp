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

    vector<string> arr;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr.push_back(s);
        for(int j=0; j<m; j++){
            if(!Q.empty())break;
            if(arr[i][j]=='I'){
                Q.push({i,j});
            }
        }
    }
    int count =0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X +dx[i];
            int y = cur.Y + dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]=='X')continue;
            if(arr[x][y]=='P') count++;
            arr[x][y] = 'X';
            Q.push({x,y});
        }
    }
    if(count==0) cout<<"TT";
    else cout<<count;

}