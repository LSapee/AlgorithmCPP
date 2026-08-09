#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string S;
    cin>>S;
    int e=0,w=0;
    for (int a: S) {
        if (a =='E') e++;
        else w++;
    }
    if (e>w)cout<<"East";
    else cout<<"West";

    return 0;
}
