#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &arr,long long mid, int m){
    long long t =0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>mid){
            t+= arr[i]-mid;
        }
    }
    return t>=m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    long long st =0;
    long long ed =*max_element(arr.begin(),arr.end());
    while(st<ed){
        long long mid = (st+ed+1)/2;
        if(check(arr,mid,m)){
            st = mid;
        }else{
            ed = mid-1;
        }
    }
    cout<<st;
    return 0;
}