#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n; int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int k; cin>>k;
    long long ans =0;
    for(int i=0; i<n; i++){
        int sum = arr[i];
        if(sum>k){
            ans+=n-i;
            continue;
        }
        for(int j=i+1; j<n; j++){
            sum+= arr[j];
            if(sum>k){
                ans+=n-j;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}