#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int ans =0;
    for(int i=0; i<n*2; i++){
        int k;cin>>k;
        ans+=abs(k);
    }
    cout<<ans;
}