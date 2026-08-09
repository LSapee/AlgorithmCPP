#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int H,W;
    cin>>H>>W;
    W*=10000;
    if (W/H/H>=25)cout<<"Yes";
    else cout<<"No";
    return 0;
}