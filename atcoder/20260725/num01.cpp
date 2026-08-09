#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    vector<int> arr(N);
    int ans =0;
    for (int i=0; i<N; i++)cin>>arr[i];
    for (int i=1; i<N-1; i++) {
        if (arr[i]>arr[i-1]&& arr[i]>arr[i+1])ans++;
    }
    cout<<ans;
    return 0;
}