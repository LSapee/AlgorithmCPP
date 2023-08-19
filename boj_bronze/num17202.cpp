#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[16][16];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    for(int i=15; i>=0; i=i-2){
        arr[0][i] = m%10;
        arr[0][i-1] = n%10;
        n/=10;
        m/=10;
    }
    for(int i=1; i<15; i++){
        for(int j=0; j<16-i; j++){
            arr[i][j]= (arr[i-1][j]+arr[i-1][j+1])%10;
        }
    }
    cout<<arr[14][0]<<arr[14][1];
    return 0;
}
