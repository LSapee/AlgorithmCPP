#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        vector<int> arr;
        for(int j =0; j<k; j++){
            int l;
            cin>>l;
            arr.push_back(l);
        }
        sort(arr.begin(),arr.end());
        cout<<arr[0]<<" "<<arr[k-1]<<"\n";
    }
}