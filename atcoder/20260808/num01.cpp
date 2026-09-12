#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    for (int i=1; i<=N; i++) {
        if (i%3==0)cout<<"Fizz\n";
        else cout<<i<<"\n";
    }
    return 0;
}