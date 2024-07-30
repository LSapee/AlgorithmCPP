#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<double> arr(n,0.0);
    for(int i=0; i<n; i++)cin>>arr[i];
    double ans = arr[0];
    for(int i=0; i<n; i++){
        double x= arr[i];
        ans = max(ans,x);
        for(int j=i+1; j<n; j++){
            x *= arr[j];
            ans = max(ans,x);
        }
    }
    cout<<fixed;
    cout.precision(3);
    cout<<ans;

    return 0;

}