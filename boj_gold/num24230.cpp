#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> graph(200005,vector<int>(0));
int arr[200005];
int cnt=0;
void dfs(int st,int color){
    for(int i=0; i<graph[st].size(); i++){
        int k =graph[st][i];
        if(k==color)continue;
        if(arr[st]!=arr[k])cnt++;
        dfs(k,st);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    // arr 배열 -> 원하는색 배열
    for(int i=1; i<=n; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1; i<=n; i++) sort(graph[i].begin(),graph[i].end());
    if(arr[1]!=0)cnt++;
    dfs(1,0);
    cout<<cnt;
}