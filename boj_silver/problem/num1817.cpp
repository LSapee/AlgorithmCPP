#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    if(n==0){
        cout<<0;
        return 0;
    }
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int k;cin>>k;
        arr.push_back(k);
    }
    int ans =0;
    int sum =0;
    for(int i=0; i<arr.size(); i++){
        if(sum+arr[i]>m){
            ans++;
            sum=arr[i];
        }else{
            sum+=arr[i];
        }
    }
    ans++;
    cout<<ans;
    return 0;
}