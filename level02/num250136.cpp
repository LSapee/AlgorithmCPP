#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4]  ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

using namespace std;
// n =깊이 m = 가로 

int n,m;
// 0~m번 까지의 덩어리 저장
vector<int> ans;
void bfs(vector<vector<int>> &arr,int st){
    for(int i=0; i<n; i++){
        if(arr[i][st]==0)continue;
        queue<pair<int,int>> Q;
        Q.push({i,st});
        //tmp > 이번에 석유를 획득하면서 가로의 몇 번칸을 방문했는지 확인
        set<int> tmp;
        tmp.insert(st);
        arr[i][st] =0;
        int cnt=1;
        while(!Q.empty()){
            pair<int,int> cur = Q.front();Q.pop();
            for(int j=0; j<4; j++){
                int x = cur.X+dx[j];
                int y = cur.Y+dy[j];
                if(x<0||x>=n||y<0||y>=m)continue;
                if(arr[x][y]==0)continue;
                tmp.insert(y);
                arr[x][y]=0;
                cnt++;
                Q.push({x,y});
            }
        }
        //i높이에서 획득한 석유를 ans에 저장
        for(auto sss : tmp)ans[sss]+=cnt;
    }
    return ;
}

int solution(vector<vector<int>> land) {
    int answer = 0;
    n= land.size();
    m =land[0].size();
    ans.resize(m);
    for(int i=0; i<m; i++) bfs(land,i);
    for(int i=0; i<m; i++)answer = max(answer,ans[i]);
    return answer;
}