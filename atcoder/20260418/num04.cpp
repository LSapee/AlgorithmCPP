#include <bits/stdc++.h>
using namespace std;

void AandB(string &s) {
    vector<char> stk;
    for (char c : s) {
        stk.push_back(c);
        while (stk.size() >= 4) {
            int n = stk.size();
            if (stk[n-4] == '(' && stk[n-3] == 'x' &&
                stk[n-2] == 'x' && stk[n-1] == ')') {
                stk.erase(stk.end() - 4, stk.end());
                stk.push_back('x');
                stk.push_back('x');
                } else break;
        }
    }
    s = string(stk.begin(), stk.end());
}
// (((((xx)))))x
// x((((((((((xx))))))))))

void solve() {
    int T; cin>>T;
    while (T--) {
        string A,B;cin>>A>>B;
        if (A==B)cout<<"Yes\n";
        else {
            AandB(A);
            AandB(B);
            if (A==B)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}