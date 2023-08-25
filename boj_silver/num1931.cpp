#include <iostream>
#include <algorithm>
#include <vector>
#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int t=0;
    int ans =0;
    vector<pair<int,int>> arr;
    for(int i=0; i<n; i++){
        int x,y;cin>>x>>y;
        arr.push_back({y,x});
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(t>arr[i].second) continue;
        t=arr[i].first;
        ans++;
    }
    cout<<ans;
    return 0;
}