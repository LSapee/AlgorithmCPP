#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    int cherry =1;
    for(int i=1; i<n; i++)cherry*=2;
    int ans = m/cherry;
    cout<<ans;

}