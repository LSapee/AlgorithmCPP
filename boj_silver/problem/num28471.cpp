#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[7] ={0,1,1,0,-1,-1,-1};
int dy[7] = {1,1,-1,-1,-1,0,1};

vector<string> arr;
int targetX = -1;
int targetY = -1;
int n;

int bfs(){
    int check[n][n];
    int cnt =0;
    fill(check[0],check[n],-1);
    check[targetX][targetY] =0;
    queue<pair<int,int>> Q;
    Q.push({targetX,targetY});
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<7; i++){
            int x =cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]=='#'||check[x][y]!=-1)continue;
            cnt++;
            check[x][y]= 1;
            Q.push({x,y});
        }
    }
    return cnt;
}

void findF(){
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j]=='F'){
                targetX = i;
                targetY =j;
                return ;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s; arr.push_back(s);
    }
    findF();
    int ans = bfs();
    cout<<ans;

}