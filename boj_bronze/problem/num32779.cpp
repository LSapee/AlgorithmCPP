#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long a, m;
        cin>>a>>m;
        long long ans = a * m * 1056/600000;
        cout<<ans<<"\n";
    }
}