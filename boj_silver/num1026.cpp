#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> arr;
    vector<int> arr2;

    for(int i=0; i<n; i++){
        int k; cin>>k;
        arr.push_back(k);
    }
    for(int i=0; i<n; i++){
        int k; cin>>k;
        arr2.push_back(k);
    }
    sort(arr.begin(),arr.end());
    sort(arr2.rbegin(),arr2.rend());
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum+ arr[i]*arr2[i];
    }
    cout<<sum;
}