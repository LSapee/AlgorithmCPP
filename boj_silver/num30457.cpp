#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int k;cin>>k;arr.push_back(k);
    }
    vector<int> f(1,0);
    vector<int> b(1,0);
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(arr[i]==f[f.size()-1]){
            if(arr[i]==b[b.size()-1])continue;
            b.push_back(arr[i]);
        }else{
            f.push_back(arr[i]);
        }
    }
    cout<<f.size()+b.size()-2;

}