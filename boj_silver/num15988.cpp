#include <bits/stdc++.h>
using namespace std;
long long arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4; i<1000001; i++){
        arr[i] = (arr[i-1]+arr[i-2]+arr[i-3])%1000000009;
    }
    for(int i=0; i<n; i++){
        int a;cin>>a;
        cout<<arr[a]<<"\n";
    }
}
