#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n,m;
int arr[100002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++)cin>>arr[i];
    int ans=INT_MAX;
    int ed =0;
    int sm = arr[0];
    for(int st=0; st<n; st++){
        while(ed<n&&sm<m){
            ed++;
            if(ed!=n)sm+=arr[ed];
        }
        if(ed==n) break;
        ans = min(ans,ed-st+1);
        sm-=arr[st];
    }
    if(ans==INT_MAX) ans=0;
    cout<<ans;
    return 0;
}