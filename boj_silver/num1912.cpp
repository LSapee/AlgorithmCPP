#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    vector<int> arr;
    vector<int> dp;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    dp.push_back(arr[0]);
    int mx =INT_MIN;
    for(int i=1; i<n; i++){
        mx = max(arr[i], arr[i]+dp[i-1]);
        dp.push_back(mx);
    }
}
