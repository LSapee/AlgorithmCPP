#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin>>n>>m;
    long long arr[n][n];
    fill(arr[0],arr[n],-1);
    arr[0][0] = 1;
    arr[1][0]=1;
    arr[1][1] =1;
    for(int i=2; i<n; i++){
        arr[i][0] = 1;
        arr[i][i] =1;
        for(int j=1; j<i; j++){
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    cout<<arr[n-1][m-1];
}