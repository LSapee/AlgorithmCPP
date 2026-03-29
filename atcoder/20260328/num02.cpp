#include <bits/stdc++.h>
using namespace std;

int N,M;
//N명의 사람 M개의 부서
vector<int> curY;
vector<int> nxtY;
void input() {
    cin>>N>>M;
    curY.assign(M+1,0);
    nxtY.assign(M+1,0);
    for (int i=0; i<N; i++) {
        int a,b;cin>>a>>b;
        curY[a]++;
        nxtY[b]++;
    }
}

void solve() {
    for (int i=1; i<=M; i++)  cout<<nxtY[i]-curY[i]<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}