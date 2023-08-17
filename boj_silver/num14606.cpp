#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 3;
    for(int i=3; i<=n; i++){
        arr[i]= arr[i-1]+i;
    }
    cout<<arr[n-1];
}