#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,Q;cin>>N>>Q;
    vector<int> A(N+1,0);
    set<int> active;
    int ans = 0;
    while (Q--) {
        int t;
        cin>>t;
        if (t == 1) {
            int x;cin>>x;
            ans ^= A[x];
            if (A[x] == 0)active.insert(x);
            A[x]++;
            ans ^= A[x];
        } else {
            for (auto it = active.begin(); it != active.end();) {
                int index = *it;
                ans ^= A[index];
                A[index]--;
                ans ^= A[index];
                if (A[index] == 0) {
                    it = active.erase(it);
                } else {
                    ++it;
                }
            }
        }
        cout<< ans <<"\n";
    }
    return 0;
}