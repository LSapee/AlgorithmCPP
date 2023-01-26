#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> arr2(m);
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    int a1=0;
    int a2=0;
    while(ans.size()!=n+m){
        if(a1==n) {ans.push_back(arr2[a2]); a2++;continue;}
        if(a2==m) {ans.push_back(arr[a1]);a1++;continue;}
        if (arr[a1]<arr2[a2]) {ans.push_back(arr[a1]); a1++;}
        if (arr[a1]>arr2[a2]) {ans.push_back(arr2[a2]); a2++;}
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}