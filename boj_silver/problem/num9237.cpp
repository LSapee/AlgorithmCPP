#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int k;cin>>k; arr.push_back(k);
    }
    int ans = INT_MIN;
    sort(arr.rbegin(),arr.rend());
    for(int i=0; i<arr.size(); i++){
        ans = max(ans,arr[i]+i+1);
    }
    cout<<ans+1;
}