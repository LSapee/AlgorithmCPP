#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> A;
vector<bool> visited;

void DFS(int a){
    if(visited[a]){
        return ;
    }
    visited[a] =true;
    for(auto i : A[a]){
        if(!visited[i]){
            DFS(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    //2차원 배열의 길이 초기화 해주기
    A.resize(n+1);
    visited.resize(n+1);
    // 인접 배열 생성해주기
    for(int i=0; i<m; i++){
        int s,e; cin>>s>>e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    int count =0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            count++;
            DFS(i);
        }
    }
    cout<<count;

}

