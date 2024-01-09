#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int cnt =0;
    vector<int> arr;
    int da; cin>>da;
    for(int i=0; i<n-1; i++){int k;cin>>k; arr.push_back(k);}
    while(1){
        if(n==1)break;
        sort(arr.rbegin(),arr.rend());
        if(arr[0]<da)break;
        else {arr[0]--; cnt++; da++;}
    }
    cout<<cnt;
}