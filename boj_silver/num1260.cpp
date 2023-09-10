#include <bits/stdc++.h>
using namespace std;


bool visited[1004];
bool visited2[1004];
int n,m,st;

void bfs(vector<vector<int>> A){
    queue<int> Q;
    Q.push(st);
    visited[st] = true;
    while(!Q.empty()){
        int k =Q.front();Q.pop();
        cout<< k <<" ";
        for(auto a : A[k]){
            if(visited[a])continue;
            Q.push(a);
            visited[a]= true;
        }
    }
    cout<<"\n";
}
void dfs(vector<vector<int>> A){
    stack<int> stk;
    stk.push(st);
    while(!stk.empty()){
        int k =stk.top(); stk.pop();
        if(visited2[k])continue;
        visited2[k] = true;
        cout<< k<<" ";
        for(int i=A[k].size()-1; i>=0; i--){
            int a =A[k][i];
            if(visited2[a])continue;
            stk.push(a);
        }
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>st;
    vector<vector<int>> A;
    A.resize(n+3,vector<int>(0));
    while(m--){
        int x,y;cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    for(int i=0; i<A.size(); i++)sort(A[i].begin(),A[i].end());
    dfs(A);
    bfs(A);

    return 0;
}