#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {2,1,-1,-2,-2,-1,1,2};
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    vector<string> arr;
    vector<vector<int>> vis(n,vector<int>(m,-1));
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    pair<int,int> st;
    pair<int,int> ed;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='K')st={i,j};
            if(arr[i][j]=='H')ed={i,j};
        }
    }
    queue<pair<int,int>>Q;
    Q.push(st);
    vis[st.X][st.Y] = 0;
    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 8; i++) {
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if (x < 0 || x >= n || y < 0 || y >= m)continue;
            if (vis[x][y] != -1 || arr[x][y] == '*')continue;
            vis[x][y] = vis[cur.X][cur.Y] + 1;
            Q.push({x, y});
        }
    }
    cout<<vis[ed.X][ed.Y];
}