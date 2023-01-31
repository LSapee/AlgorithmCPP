#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        int k;cin>>k;
        arr[i] =k;
    }
    int count=0;

    while(n--){
        if(arr[n]<=m){
            count+= m/arr[n];
            m -= m/arr[n]*arr[n];
        }
        if(m==0){
            break;
        }
    }
    cout<<count;

}