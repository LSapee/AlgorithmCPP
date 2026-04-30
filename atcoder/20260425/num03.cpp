#include <bits/stdc++.h>
using namespace std;

int N,K;
map<int,long long> mp;
map<long long,int> re;
void input() {
    cin>>N>>K;
    for (int i=0; i<N; i++) {
        int a;cin>>a;
        mp[a] += a;
    }
}

void solve() {
    priority_queue<long long> pq;
    long long ans  =0;
    for (auto a: mp) {
        pq.push(a.second);
        ans += a.second;
    }
    while (!pq.empty() && K>0) {
        ans-=pq.top();
        pq.pop();
        K--;
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}