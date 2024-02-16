#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,card;cin>>n>>card;

    vector<vector<int>> arr;
    vector<int> ans(n+1,0);
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<card; j++){
            int k;cin>>k; temp.push_back(k);
        }
        sort(temp.rbegin(),temp.rend());
        arr.push_back(temp);
    }
    for(int i=0; i<card; i++){
        int mx = 0;
        for(int j=0; j<n; j++)mx=max(mx,arr[j][i]);
        for(int j=0; j<n; j++) if(arr[j][i]==mx) ans[j+1]++;
    }
    int mx = 0;
    for(int i=1; i<=n; i++)mx=max(ans[i],mx);
    for(int i=1; i<=n; i++)if(ans[i]==mx) cout<<i<<" ";

}