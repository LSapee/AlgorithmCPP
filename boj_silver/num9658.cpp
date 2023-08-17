#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int arr[1001];
    arr[1]=0,arr[3]=0;
    arr[2]=1,arr[4]=1,arr[5]=1,arr[6]=1;

    for(int i=7; i<=n; i++){
        if(arr[i-1]==1&&arr[i-3]==1&&arr[i-4]==1) arr[i]=0;
        else arr[i]=1;
    }
    if(arr[n]) cout<<"SK";
    else cout<<"CY";
}