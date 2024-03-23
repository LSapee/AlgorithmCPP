#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n,m,k;
vector<vector<int>> arr;
vector<vector<int>> ans;
int bfs(pair<int,int> st){
    if(m<0) return -1;
    int mx =INT_MIN;
    queue<pair<int,int>> Q;
    Q.push(st);
    int cnt =1;
    ans[st.X][st.Y] = 0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]==1||ans[x][y]!=-1)continue;
            ans[x][y] = ans[cur.X][cur.Y]+1;
            Q.push({x,y});
            cnt++;
        }
    }
    int b =0;
    if(cnt<=k)return 1;
    if(cnt%k>0)b=1;
    return cnt/k+b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    bool ok = false;
    // 빈배열
    for(int i=0; i<n; i++){
        vector<int> temp(n,-1);
        ans.push_back(temp);
    }
    // 농장초기화
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int a; cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==0 && ans[i][j]==-1){
                ok = true;
                int count = bfs({i,j});
                m-=count;
                // 불가능할때
                if(m<0){
                    cout<<"IMPOSSIBLE";
                    return 0;
                }
            }
        }
    }
    if(!ok){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    cout<<"POSSIBLE\n";
    cout<<m;
}