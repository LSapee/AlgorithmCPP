#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;cin>>N;
    int ans =0;
    for (int i=0; i<N; i++) {
        int a,b;cin>>a>>b;
        string s; cin>>s;
        if (s[0] == 'k')ans+=b-a;
    }
    cout<<ans;
    return 0;
}