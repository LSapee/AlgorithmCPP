#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    int arr[n];
    vector<int> DP(m+1);
    for(int i=0; i<n; i++)cin>>arr[i];
    DP[0]=1;
    for(int i=0; i<n; i++){
        for(int j=arr[i]; j<=m; j++){
            DP[j] += DP[j-arr[i]];
        }
    }
    cout<<DP[m];
}