#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<int> cnt;
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
    cnt.resize(n,1);
    for(int i=n-1; i>=0; i--){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                cnt[i] = max(cnt[i],cnt[j]+1);
            }
        }
    }
    int ans = INT_MIN;
    for(int i=0; i<n; i++)ans = max(ans,cnt[i]);
    cout<<ans;
    return 0;
}