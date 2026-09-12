#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    vector<int> arr(N+1,0);
    for (int i=0; i<N; i++) {
        int a; cin>>a;
        arr[a]++;
    }
    int mx = 0;
    for (int i=1; i<=N; i++)mx = max(mx,arr[i]);
    cout<<N-mx;
    return 0;
}