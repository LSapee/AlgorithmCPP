#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    string s,ss;cin>>s>>ss;
    for (int i=0; i<N; i++) {
        if (s[i]!=ss[i]) {
            if (ss[i] != '*') {
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}