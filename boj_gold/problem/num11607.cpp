#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;
vector<string> arr;
vector<vector<int>> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        vector<int> k;
        for(int j=0; j<m; j++){
            k.push_back(-1);
        }
        ans.push_back(k);
    }

    queue<pair<int,int>> Q;
    Q.push({0,0});
    ans[0][0] = 0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        int t = arr[cur.X][cur.Y]-'0';
        for(int i=0; i<4; i++){
            int x = cur.X;
            int y= cur.Y;
            if(i==0)y+=t;
            if(i==1)x+=t;
            if(i==2)y-=t;
            if(i==3)x-=t;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(ans[x][y]!=-1)continue;
            ans[x][y] = ans[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    if(ans[n-1][m-1]==-1)cout<<"IMPOSSIBLE";
    else cout<<ans[n-1][m-1];
}