#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {0,1,0,-1};
int dy[4] ={1,0,-1,0};

using namespace std;
int n,m,t;
vector<string> arr;
vector<vector<bool>> visited;
int DFS(int a, int b,int ans){
    if(ans == t){
        return arr[a][b] =='E' ? 1:0;
    }
    int count =0;
    for(int i=0; i<4; i++){
        int x = a + dx[i];
        int y = b+ dy[i];
        if(x<0||x>=n||y<0||y>=m)continue;
        if(arr[x][y]=='T'||visited[x][y])continue;
        visited[x][y] = true;
        count+= DFS(x,y,ans+1);
        visited[x][y] = false;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>t;
    visited.resize(n+1);
    for(int i=0; i<n; i++){
        string s; cin>>s;
        arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            visited[i].push_back(false);
        }
    }
    visited[n-1][0] =true;
    arr[0][m-1] = 'E';
    int ans = DFS(n-1,0,1);
    cout<<ans;

}