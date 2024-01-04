#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m,c;
vector<pair<int,int>> finds;
int arr[1001][1001];
pair<int,int> start;
//void aaa(){
//    for(int i=0; i<10; i++){
//        cout<<finds[i].X<<" "<<finds[i].Y<<"\n";
//    }
//}
void bfs(pair<int,int> target){
    bool vis[1001][1001];
    fill(vis[0],vis[1001],false);
    queue<pair<int,int>> Q;
    Q.push({start.X,start.Y});
    vis[start.X][start.Y] =true;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(arr[x][y]==-1||vis[x][y])continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            vis[x][y] =true;
            if(x==target.X&&y==target.Y) return ;
            Q.push({x,y});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>c;
    vector<string> s;
    for(int i=0; i<10; i++){
        finds.push_back({-1,-1});
    }
    for(int i=0; i<n; i++){
        string ss;cin>>ss;s.push_back(ss);
    }
    for(int i=0; i<n;i ++){
        for(int j=0; j<m; j++){
            if(s[i][j]=='S'){
                start = {i,j};
            }else if(s[i][j]-'1'>=0&&s[i][j]-'1'<=9){
                int k =s[i][j]-'1';
                finds[k].X = i;
                finds[k].Y = j;
                s[i][j]='.';
            }else if(s[i][j]=='X'){
                arr[i][j] =-1;
            }
        }
    }
    int num = 0;
    for(int i=0; i<finds.size(); i++){
        if(finds[i].X==-1) {
            num=i-1;
            break;
        }
        pair<int,int> target = finds[i];
        bfs(target);
        start = target;
    }
    cout<<arr[finds[num].X][finds[num].Y];
}