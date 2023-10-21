#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int ans[n];
    ans[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]==0) ans[i] = ans[i+1]+1;
        else{
            if(i+arr[i]+1 >=n) ans[i] = 1;
            else ans[i] = ans[i+arr[i]+1]+1;
        }
    }
    for(int i=0; i<n; i++)cout<<ans[i]<<" ";
}