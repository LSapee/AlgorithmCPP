#include <bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    bool visited[n+1];
    for(int i=1; i<=n; i++)visited[i]= false;
    vector<vector<int>> arr;
    arr.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<int> Q;
    Q.push(1);
    visited[1] =true;
    int count=0;
    while(!Q.empty()){
        int k = Q.front(); Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            int x = arr[k][i];
            if(visited[x])continue;
            visited[x] = true;
            Q.push(x);
            count++;
        }
    }
    cout<<count;
    return 0;
}

