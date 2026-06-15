#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,D;
    cin>>N>>D;
    int MT = 1000003;
    vector<long long> arr(MT,0);
    for (int i =0; i<N; i++) {
        int S,T;
        cin >>S>>T;
        int L= S;
        int R= T-D;
        if (L <= R) {
            arr[L]++;
            arr[R+1]--;
        }
    }

    long long ans = 0;
    long long cntP = 0;

    for (long long a: arr) {
        cntP += a;
        ans += cntP * (cntP-1)/ 2;
    }
    cout<< ans<<'\n';
    return 0;
}