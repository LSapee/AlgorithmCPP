#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

vector<int> answer;
void bfs(vector<string> &maps){
    int n =maps.size();
    int m = maps[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(maps[i][j]=='X') continue;
            int cnt =maps[i][j]-'0';
            queue<pair<int,int>> Q;
            Q.push({i,j});
            maps[i][j]='X';
            while(!Q.empty()){
                pair<int,int> cur  =Q.front(); Q.pop();
                for(int z= 0; z<4; z++){
                    int x= dx[z]+cur.X;
                    int y= dy[z]+cur.Y;
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(maps[x][y]=='X')continue;
                    cnt+=maps[x][y]-'0';
                    maps[x][y]='X';
                    Q.push({x,y});
                }
            }
            answer.push_back(cnt);
        }
    }
}

vector<int> solution(vector<string> maps) {
    bfs(maps);
    if(answer.size()==0) return {-1};
    sort(answer.begin(),answer.end());
    return answer;
}