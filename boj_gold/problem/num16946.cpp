#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
vector<vector<int>> check;
vector<vector<int>> ans;
vector<int> groupV;

//영역에 따라 표시해주기
void groupingBFS(int stx,int sty,int groupNum){
    int mxNum = -1;
    queue<pair<int,int>> Q;
    queue<pair<int,int>> thisQ;
    Q.push({stx,sty});
    check[stx][sty]= 1;
    int cnt =1;
    while(!Q.empty()){
        thisQ.push(Q.front());
        auto cur = Q.front();Q.pop();
        if(cnt>mxNum) mxNum=cnt;
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(check[x][y]!=0)continue;
            check[x][y] = 1;
            cnt++;
            Q.push({x,y});
        }
    }
    groupV.push_back(mxNum);
    while(!thisQ.empty()){
        auto cur = thisQ.front();thisQ.pop();
        check[cur.X][cur.Y] =groupNum;
    }
}

int BFS(int stx,int sty){
    int k = 1;
    unordered_set<int> useG;
    for(int i=0; i<4; i++){
        int x = dx[i]+stx;
        int y = dy[i]+sty;
        if(x<0||x>=n||y<0||y>=m)continue;
        if(check[x][y]==-1)continue;
        useG.insert(check[x][y]);
    }
    for(int a: useG) k+=groupV[a];
    return k;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    check.resize(n,vector<int>(m,0));
    ans.resize(n,vector<int>(m,0));
    int groupNum = 0;
    // 입력값 받기
    for(int i=0; i<n; i++){
        string s;cin>>s;
        for(int j=0; j<m; j++){
            if(s[j]=='1'){
                check[i][j]=-1;
                ans[i][j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(check[i][j]==0){
                groupingBFS(i,j,groupNum++);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ans[i][j]==1){
                ans[i][j]= BFS(i,j)%10;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
    return 0;
}