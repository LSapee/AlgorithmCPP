#include <iostream>

using namespace std;
int arr[10000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        if(arr[k]>0) {
            cout<<k;
            break;
        }
        arr[k]++;
    }
    return 0;
}