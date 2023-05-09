#include <iostream>
#define MOD 1000000009
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    long long arr[100001][4];
    arr[1][1]= arr[2][2] =1;
    arr[3][1] =1;
    arr[3][2] =1;
    arr[3][3] =1;
    for(int i=4; i<100001; i++){
        arr[i][1]= (arr[i-1][2]+arr[i-1][3]) %MOD;
        arr[i][2]= (arr[i-2][1]+arr[i-2][3]) %MOD;
        arr[i][3]= (arr[i-3][1]+arr[i-3][2]) %MOD;
    }
    for(int i=0; i<n; i++){
        int a;cin>>a;
        cout<<(arr[a][1]+arr[a][2]+arr[a][3])%MOD<<"\n";
    }
}