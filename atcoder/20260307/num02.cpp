#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> arr;
vector<int> k;
int ans =0;
void input() {
    cin>>N>>M;
    for (int i=0; i<M; i++) {
        int a; cin>>a;
        arr.push_back(a);
    }
}

void solve() {
    k.assign(M,0);
    for (int i=0; i<N; i++) {
       int a,b;cin>>a>>b;
       k[a-1] += b;
    }
    for (int i=0; i<M; i++) {
        if (arr[i]>=k[i] )ans+=k[i];
        else ans+=arr[i];
    }
}

void output() {
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    output();

    return 0;
}