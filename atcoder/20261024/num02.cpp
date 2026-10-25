#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,K;cin>>N>>K;
    int ans =0;
    int prev = -1;
    for (int i=0; i<N; i++) {
        int A; cin>>A;
        if (i==0) {
            if (A==K)ans++;
            prev=A;
            continue;
        }
        if (prev >K && A<=K)ans++;
        else if (prev<K && A>=K)ans++;
        else if (prev == K && A== K)ans++;
        prev= A;
    }
    cout<<ans;
    return 0;
}

