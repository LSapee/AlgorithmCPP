#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    int arr[n];
    vector<int> ans(n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = arr[n-1];
    int val =0;
    for(int i= n-2; i>=0; i--){
        ans[i] = mx-arr[i];
        if(arr[i]>mx) mx = arr[i];
        val = max(val,ans[i]);
    }
    cout<<val;
    return 0;
}

