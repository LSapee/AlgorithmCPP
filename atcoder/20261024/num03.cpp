#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Q;cin>>Q;
    unordered_map<string,int> mp;
    int cnt = 1;
    while (Q--) {
        string s;cin>>s;
        if (mp.find(s)== mp.end()) {
            mp[s]=cnt;
            cnt++;
            cout<<mp[s]<<"\n";
        }else {
            cout<<mp[s]<<"\n";
        }
    }
    return 0;
}