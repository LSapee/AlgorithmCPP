#include <bits/stdc++.h>
using namespace std;

int arr[12];

int main(){
    int n;
    cin>>n;
    arr[1] =1;
    arr[2] =2;
    arr[3] =4;

    for(int i=4; i<11; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }
    while(n--){
        int k;
        cin>>k;
        cout<<arr[k]<<"\n";
    }
}