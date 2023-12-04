#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
int ans =0;

void targetNum(int k){
    if(k>n) return ;
    ans = max(ans,k);
    for(int i=0; i<arr.size(); i++){
        k*=10;
        k+=arr[i];
        targetNum(k);
        k/=10;
    }
    return ;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;cin>>n>>k;
    for(int i=0; i<k;i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    targetNum(0);
    cout<<ans;
}