#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int H,W;cin>>H>>W;
    vector<string> ans;
    int U=999,D=0,R=0,L=999;
    for (int i=0; i<H; i++) {
        string s;cin>>s;
        ans.push_back(s);
        for (int j = 0; j<W; j++) {
            if (s[j] == '#') {
                U = min(U,i);
                D = max(D,i);
                L = min(L,j);
                R = max(R,j);
            }
        }
    }
    for (int i=U; i<=D; i++) {
        for (int j=L; j<=R; j++) {
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
