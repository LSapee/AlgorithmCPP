
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,timer,sum;
    cin>>n;
    timer =0;
    sum = 0;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0; i<n; ++i){
        timer+= arr[i];
        sum += timer;
    }
    cout<<sum;
    return 0;
}