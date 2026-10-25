#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,ss;
    cin>>s>>ss;
    if (s[0] == 'A' && (s[1] == 'D'||ss[0]=='D')) cout<<"Yes";
    else if (s[1] == 'A' && (s[0] == 'D'||ss[1]=='D')) cout<<"Yes";
    else if (ss[0] == 'A' && (ss[1] == 'D'||s[0]=='D')) cout<<"Yes";
    else if (ss[1] == 'A' && (ss[0] == 'D'||s[1]=='D')) cout<<"Yes";
    else cout<<"No";

    return 0;
    

}