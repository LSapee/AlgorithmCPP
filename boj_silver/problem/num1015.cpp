#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<int> arr;
    vector<int> ans;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr.push_back(k);
        ans.push_back(k);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ans[i]==arr[j]){
                cout<<j<<" ";
                arr[j] = -1;
                break;
            }
        }
    }
}