#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    long long k =1;
    for(int i=1; i<=n;i++) k*=i;
    cout<<k/7/24/60/60;
}