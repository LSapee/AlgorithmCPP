#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> arr;
vector<double> water;

void input(){
    cin>>N>>M;
    arr.resize(N+1);
    water.assign(N+1,0);
    for(int i=0; i<M; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
    }
}

void solve(){
    water[1] = 100;
    for(int i=1; i<=N; i++){
        int m = arr[i].size();
        for(int j =0; j<m; j++)water[arr[i][j]] += water[i]/m;
        if(m!=0)water[i] =0;
    }
    double ans = 0.0;
    for(int k=1; k<=N; k++)ans = max(ans,water[k]);
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
}
