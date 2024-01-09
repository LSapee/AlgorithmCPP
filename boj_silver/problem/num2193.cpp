#include <bits/stdc++.h>
using namespace std;

unsigned long long arr[91];
int main(){

    int n;cin>>n;
    arr[0] = 0;
    arr[1] =1;
    arr[2] = 1;
    arr[3] =2;
    arr[4] = 3;
    for(int i=5; i<=n; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout<<arr[n];
    return 0;
}