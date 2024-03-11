#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    long long arr[n+1];
    arr[0] =0;
    arr[1] =1;
    for(int i=2;i<=n; i++)arr[i] = arr[i-1]+arr[i-2];

    cout<<arr[n]*2+(arr[n-1]+arr[n])*2;
}