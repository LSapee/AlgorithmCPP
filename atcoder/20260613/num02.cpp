#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<vector<int>> ans(n+1,vector<int>(0));
    for (int i=0; i<n; i++) {
        int a; cin>>a;
        for (int j=0; j<a; j++) {
            int target;cin>>target;
            ans[target].push_back(i+1);
        }
    }
    for (int i=1; i<=n; i++) {
        cout<<ans[i].size()<<" ";
        for (int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}