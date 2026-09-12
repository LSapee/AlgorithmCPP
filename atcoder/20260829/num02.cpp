#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    unordered_map<int,int> mp;
    int ans =0;
    for (int i=0; i<n; i++) {
        int temp; cin>>temp;
        mp[temp]++;
    }
    for (auto c: mp) if (c.second%2!=0)ans+=c.first;

    cout<<ans;
    return 0;
}