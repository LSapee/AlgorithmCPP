#include <bits/stdc++.h>
using namespace std;

int person[100001];
int ans[100001];
int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++)cin>>person[i];
    vector<pair<int,int>> arr;
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        int x= arr[i].first;
        int y = arr[i].second;
        ans[x]+=y;
    }
    for(int i=1; i<=n; i++)ans[i]+= ans[person[i]];
    for(int i=1; i<=n; i++)cout<<ans[i]<<" ";
}