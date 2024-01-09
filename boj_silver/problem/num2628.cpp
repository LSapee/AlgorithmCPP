#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    int k;cin>>k;
    vector<int> arr;
    vector<int> arr2;
    // 시작위치
    arr.push_back(0);
    arr2.push_back(0);
    int ans = 0;
    for(int i=0; i<k; i++){
        int a,b;cin>>a>>b;
        if(a==0){
            arr.push_back(b);
        }else{
            arr2.push_back(b);
        }
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    // 마지막 위치 추가
    arr.push_back(m);
    arr2.push_back(n);
    for(int i=1; i<arr.size(); i++){
        int p = 0;
        for(int j=1; j<arr2.size(); j++){
            p = (arr[i]-arr[i-1]) * (arr2[j]-arr2[j-1]);
            ans = max(ans,p);
        }
    }
    cout<<ans;
}