#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,K; cin>>N>>K;
    int mx = INT_MIN;
    int ans =0;
    vector<int> arr(K+1,0);
    for (int i=0; i<N; i++) {
        int a; cin>>a;
        arr[a]++;
        mx = max(arr[a],mx);
    }
    mx--;
    for (int i=1; i<=K; i++)if (arr[i]>=mx)ans++;
    cout<<ans;
    return 0;
}