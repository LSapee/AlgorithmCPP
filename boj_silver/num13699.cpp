#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long arr[36];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=5;
    for(int i=4; i<=n; i++){
        for(int j=0; j<i; j++){
            arr[i] += arr[j]*arr[i-j-1];
        }
    }
    cout<<arr[n];

}