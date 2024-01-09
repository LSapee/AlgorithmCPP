#include <iostream>
using namespace std;

int arr[1001];

int main(){
    int n; cin>>n;

    arr[1]=1;
    arr[2]=0;
    arr[3]=1;
    arr[4]=1;
    for(int i=5; i<=n; i++){
        arr[i] = arr[i-4]+arr[i-3]+arr[i-1];
        if(arr[i]<3) arr[i]=1;
        else arr[i]=0;
    }
    if(arr[n])cout<<"SK";
    else cout<<"CY";
}