#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<int> sum;
void input(){
    cin>>n;
    arr.resize(n,0);
    for(int i=0; i<n; i++)cin>>arr[i];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    sum.resize(n,0);
    sum[n-1] = arr[n-1];
    for(int i=n-1; i>=0; i--){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                sum[i] = max(sum[i],sum[j]+arr[i]);
            }else if(sum[i]==0){
                sum[i]=arr[i];
            }
        }
    }
    int ans =INT_MIN;
    for(int i=0; i<n; i++)ans = max(ans,sum[i]);
    cout<<ans;
    return 0;
}
