#include <bits/stdc++.h>
using namespace std;

vector<int> visD;
vector<int> visT;
vector<vector<int>> arr;
bool check[100005];

void bfs(int st){
    int cnt=1;
    visD[st] = 0;
    visT[st] =cnt;
    check[st] = true;
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int k = Q.front(); Q.pop();
        sort(arr[k].begin(),arr[k].end());
        for(int i=0; i<arr[k].size(); i++){
            int x= arr[k][i];
            if(check[x])continue;
            check[x]=true;
            visD[x] = visD[k]+1;
            visT[x] = ++cnt;
            Q.push(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 모든 노드의 깊이 * 모든 노드의 방문 순서
    int n,m,st;
    cin>>n>>m>>st;
    visD.resize(n+1,-1);
    visT.resize(n+1,0);
    arr.resize(n+1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    bfs(st);
    long long ans =0;
    for(int i=1; i<=n; i++){
        long long D = visD[i];
        long long T = visT[i];
        ans+=D*T;
    }

    cout<<ans;

}