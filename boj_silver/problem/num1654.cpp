#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &arr,long long mid, int k){
    int cnt =0;
    for(int i=0; i<arr.size(); i++){
        cnt+= arr[i]/mid;
    }
    return cnt>=k;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    long long mn = *max_element(arr.begin(),arr.end());
    long long st = 1;
    while(st<mn){
        long long mid = (st+mn+1)/2;
        if(check(arr,mid,m)){
            st = mid;
        }else{
            mn = mid-1;
        }
    }
    cout<<st;
    return 0;
}