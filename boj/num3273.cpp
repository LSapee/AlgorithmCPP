#include <bits/stdc++.h>
using namespace std;
//내 코드
int main() {
    int a,count,n,x;
    cin>>n;
    count=0;
    int arr[n];
    int arr2[1000000] ={};
    fill(arr,arr+n,0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0; i<n; i++){
        a= x-arr[i];
        if(a<1){
            continue;
        }
        if(arr2[a]==1){
            count++;
        }else{
            arr2[arr[i]]++;
        }
    }
    cout<<count;

    return 0;
}