#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    int vis[n+1];
    fill(vis,vis+n+1,-1);
    vector<vector<int>> graph(n+1,vector<int>(0));
    for(int i=0; i<edge.size(); i++){
        int a = edge[i][0];
        int b = edge[i][1];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<int> Q;
    Q.push(1);
    vis[1] = 0;
    int mx = -1;
    while(!Q.empty()){
        int k = Q.front();Q.pop();
        for(int i=0; i<graph[k].size(); i++){
            int x = graph[k][i];
            if(vis[x]!=-1)continue;
            vis[x] = vis[k]+1;
            mx = max(vis[x],mx);
            Q.push(x);
        }
    }
    for(int i=1; i<=n; i++)if(vis[i]==mx)answer++;
    return answer;
}