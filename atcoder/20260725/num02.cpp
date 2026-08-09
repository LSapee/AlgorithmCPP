#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,D;
    cin>>N>>D;
    string s;cin>>s;
    vector<int> vis(N,0);
    int ans =0;
    for (int i=0; i<N; i++) {
        if (s[i]=='G') {
            int ed = i+D >= N-1 ? N-1 : i+D;
            int st = i-D <= 0 ? 0 :i-D;
            for (int j= st; j<=ed; j++)vis[j]=1;
        }
    }
    for (int i=0; i<N; i++)if (vis[i]==0)ans++;
    cout<<ans;
    return 0;
}