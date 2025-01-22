#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int mx = -1;
    vector<int> arr(n,0);
    vector<int> ans(n,0);
    vector<int> vis(1000001,-1);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        vis[arr[i]]= i;
        if(arr[i]>mx)mx=arr[i];
    }
    for(int i=0; i<n; i++){
        int k =arr[i];
        for(int j=2; k*j<=mx; j++){
            if(vis[k*j]!=-1){
                ans[i]++;
                ans[vis[k*j]]--;
            }
        }
    }
    for(int i=0; i<n; i++)cout<<ans[i]<<" ";
}