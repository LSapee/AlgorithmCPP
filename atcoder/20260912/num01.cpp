#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s;
    int n = s.size();
    string ans = "";
    for (int i=0; i<n-1; i++) {
        ans+=s[i];
        ans+="o";
    }
    ans+= s[n-1];
    cout<<ans;
    return 0;
}