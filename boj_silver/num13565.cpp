#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

string s[1001];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> Q;
    for(int i=0; i<n; i++){
        string k;
        cin>>k;
        s[i]=k;
    }
    for (int j = 0; j < m; j++) {
        if (s[0][j] == '0')
            Q.push({0, j});
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x =cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(s[x][y]!='0')continue;
            s[x][y] = '2';
            Q.push({x,y});
        }
    }
    string ans = "NO";
    for(int i=0; i<m; i++){
        if(s[n-1][i] == '2') ans="YES";
    }
    cout<<ans;

    return 0;
}