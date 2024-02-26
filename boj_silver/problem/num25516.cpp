#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<vector<int>> T;
vector<int> apples;
//방문을 확인하는 배열
vector<int> vis;

int bfs(){
    queue<int> Q;
    Q.push(0);
    vis[0] =0;
    while(!Q.empty()){
        int p = Q.front(); Q.pop();
        sort(T[p].begin(),T[p].end());
        for(int i=0; i<T[p].size(); i++){
            int x = T[p][i];
            if(vis[x]!=-1)continue;
            vis[x] = vis[p]+1;
            Q.push(x);
        }
    }
    int result = 0;
    for(int i=0; i<n; i++){
        if(vis[i]==-1)continue;
        if(vis[i]<=k) result+=apples[i];
    }
    return result;
}

void input(){
    // n과 k에 값을 넣어주기
    cin>>n>>k;
    T.resize(n);
    // 트리
    for(int i=0; i<n-1; i++){
        int a,b;cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    // 정점에 있는 사과의 갯 수를 저장한 배열
    vis.resize(n,-1);
    for(int i=0; i<n; i++){
        int a;cin>>a; apples.push_back(a);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //n개의 정점과 n-1개의 간선으로 구성된 트리 T
    //루트 노드에서 거리가 k이하인 노드에 있는 사과를 수확
    input();
    int ans = bfs();
    cout<<ans;
    return 0;
}
