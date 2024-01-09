#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;cin>>n>>k;
    vector<string> maps;
    for(int i=0; i<2; i++){
        string s;cin>>s;
        maps.push_back(s);
    }
    vector<vector<int>> arr;
    for(int i=0; i<2;i++){
        vector<int> as;
        for(int j=0; j<n; j++){
            as.push_back(0);
        }
        arr.push_back(as);
    }
    int st =0;
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,k,k};
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur =Q.front(); Q.pop();
        st= arr[cur.X][cur.Y];
        if(cur.Y<st)continue;
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||y<0||x>=2)continue;
            if(y>=n){cout<<1;return 0;}
            if(maps[x][y]=='0'|| arr[x][y]>0)continue;
            Q.push({x,y});
            arr[x][y]=arr[cur.X][cur.Y]+1;
        }
    }
    cout<<0;
    return 0;
}