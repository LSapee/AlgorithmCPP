#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int ans =0;
    vector<int> arr(n,0);
    for (int i=0; i<n; i++)cin>>arr[i];
    for (int i= n/2; i<n; i++)ans+=arr[i];
    cout<<ans;
    return 0;
}