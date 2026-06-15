#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;

    int ans =0;
    int MY = INT_MAX;
    vector<pair<int,int>> arr;
    for (int i=0; i<n; i++) {
        int x,y;cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end());
    for (int i=0; i<n; i++) {
        int y = arr[i].second;
        if (y < MY) {
            ans++;
        }
        MY = min(MY,y);
    }
    cout<<ans;
    return 0;
}