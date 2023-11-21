#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] ={1,0,-1,0};

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    vector<string> myMap;
    //입력값 받기
    for(int i=0; i<n; i++){
        string s;cin>>s;
        myMap.push_back(s);
    }
    // 와드 표시할 지도 생성
    vector<string> ans;
    for(int i=0; i<n; i++){
        string s="";
        for(int j=0; j<m; j++){
            s +="#";
        }
        ans.push_back(s);
    }
    //현재 위치 입력값 받기
    int a,b;cin>>a>>b;
    // 지도는 1~시작함으로 index값은 -1해주기
    int my[2] = {a-1,b-1};
    string s;cin>>s;
    queue<pair<int,int>> Q;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='L') my[1]--;
        else if(s[i]=='R')my[1]++;
        else if(s[i]=='D')my[0]++;
        else if(s[i]=='U')my[0]--;
        else if(s[i]=='W'){
            // 와드 된 지형 표시 하고 bfs를 돌릴 큐에 삽입
            ans[my[0]][my[1]]='.';
            Q.push({my[0],my[1]});
        }
    }
    //bfs
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        char t = myMap[cur.X][cur.Y];
        for(int i=0; i<4; i++){
            int x =cur.X +dx[i];
            int y = cur.Y +dy[i];
            if(x<0||x>=n||y<0||y>=m)continue;
            if(ans[x][y]=='.'||myMap[x][y]!=t)continue;
            ans[x][y]='.';
            Q.push({x,y});
        }
    }
    // 마지막 나의 위치에서의 상하좌우 자신위치 표시해주기
    ans[my[0]][my[1]]='.';
    for(int i=0; i<4; i++){
        int x =my[0]+dx[i];
        int y =my[1]+dy[i];
        if(x<0||x>=n||y<0||y>=m)continue;
        ans[x][y]='.';
    }

    for(int i=0; i<n; i++)cout<<ans[i]<<"\n";
    return 0;
}