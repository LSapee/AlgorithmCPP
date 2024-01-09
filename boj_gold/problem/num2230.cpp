#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int n,m;
int arr[100002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    int ed =0;

    int ans =INT_MAX;
    for(int st=0; st<n; st++){
        while(ed<n&& arr[ed]-arr[st]<m){ed++;}
        if(ed==n)break;
        if(arr[ed]-arr[st]>=m)ans = min(ans,arr[ed]-arr[st]);
    }
    cout<<ans;
    return 0;
}