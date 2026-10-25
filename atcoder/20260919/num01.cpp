#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int n = s.size();
    if (s[n-1] == 'e')s+="r";
    else s+="er";
    cout<<s;
    return 0;
}