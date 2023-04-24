#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> A;
vector<bool> visited;
bool ok =false;

void dfs(int st, int cnt){
    if(cnt==5||ok){
        ok=true;
        return ;
    }
    visited[st] = true;
    for(auto i : A[st]){
        if(i==-1)continue;
        if(!visited[i]){
            dfs(i,cnt+1);
        }
    }
    visited[st]=false;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    //배열 초기화
    A.resize(n);
    for(int i=0; i<n; i++)visited.push_back(false);
    for(int i=0; i<m; i++){
        int x,y;cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for(int i=0; i<n; i++){
        dfs(i,1);
        if(ok)break;
    }
    if(ok)cout<<1;
    else cout<<0;
}