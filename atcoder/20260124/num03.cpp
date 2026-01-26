#include <bits/stdc++.h>
using namespace std;

// 처음에는 그래프 탐색 문제인줄 알았으나 단순 조합론.
// 최대 a와 연결되지 않은 사람들로 3명을 만들수 있는 조합을 찾는 것  - > 로또 확률 알고리즘  (N-1)-(연결된사람/최대 사람수) 이걸 M-1까지의 곱/M!

int N,M;
vector<vector<int>> arr;
vector<long long> ans;
void input(){
    cin>>N>>M;
    arr.resize(N+1,vector<int>(0));
    for(int i=0; i<M; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
}
void solve(){
    for(int i=1; i<=N; i++){
        long long noP = (N-1)-arr[i].size();
        ans.push_back(noP*(noP-1)*(noP-2)/6);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    for(int i=0; i<N; i++)cout<<ans[i]<<" ";
    return 0;
}
