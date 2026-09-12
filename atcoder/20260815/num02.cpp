#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    unordered_map<string,int> mp;
    for (int i=0; i<N; i++) {
        string s; cin>>s;
        int m = s.size();
        for (int j=0; j<m; j++) {
            if (s[j]>='A' && s[j]<='Z')s[j]+=32;
        }
        mp[s]++;
    }
    int ans =0;
    for (auto a: mp)ans = max(ans,a.second);
    cout<<ans;
    return 0;
}