#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A,B;cin>>A>>B;
    if (A+B == 9 || A-B==9 ||A*B==9 ||(A%B==0&&A/B==9))cout<<"Nine";
    else cout<<"Nein";
    return 0;
}