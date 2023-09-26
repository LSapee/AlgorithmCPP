#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int arr[n];
    vector<int> narr(n,1);
    vector<int> xarr(n,1);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=1; i<n; i++){
        if(arr[i-1]<=arr[i])xarr[i]= xarr[i-1]+1;
        if(arr[i-1]>=arr[i])narr[i]= narr[i-1]+1;
    }
    sort(xarr.begin(),xarr.end());
    sort(narr.begin(),narr.end());
    cout<<max(narr[n-1],xarr[n-1]);


}