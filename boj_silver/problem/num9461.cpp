#include <bits/stdc++.h>
using namespace std;

long long arr[101];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=2;
    int n;cin>>n;
    for(int i=5; i<101; i++){
        arr[i] =arr[i-3]+arr[i-2];
    }
    for(int i=0; i<n; i++){
        int a; cin>>a;
        cout<<arr[a]<<"\n";
    }


    return 0;
}