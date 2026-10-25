#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int Q;cin>>Q;
    string S,T; cin>>S>>T;
    int N = S.size();
    int M = T.size();
    auto it = S.find(T);
    int cur =0;
    vector<int> pos(N+1,N+1);
    while (it!= string::npos) {
        int start = static_cast<int>(it);
        for (int i=cur; i<=start; i++) pos[i] = start+M;
        cur = start+1;
        it = S.find(T,it+1);
    }
    for (int i=0; i<Q; i++) {
        int a,b;cin>>a>>b;
        if (pos[a-1]<=b)cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}