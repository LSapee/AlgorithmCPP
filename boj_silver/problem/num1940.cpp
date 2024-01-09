#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    vector<int> arr;
    int count =0;
    int st=0;
    int end =n-1;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    while(arr[end]-arr[st]>0){
        int k = arr[st]+arr[end];
        if(k==m){
            count++;
            st++;
            end--;
        }
        if(k>m)end--;
        if(k<m)st++;
    }
    cout<<count;
}