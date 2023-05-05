#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int arr[n];
    int count =0;
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=n-2; i>=0; i--){
        if(arr[i+1]-1<arr[i]){
            count+=arr[i]-(arr[i+1]-1);
            arr[i] = arr[i+1]-1;
        }
    }
    cout<<count;
}
