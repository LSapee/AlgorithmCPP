#include <bits/stdc++.h>
using namespace std;

int arr[31][31];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[0][0]=1;
    for(int i=1; i<31; i++){
        arr[i][0] =1;
        arr[i][i] =1;
        for(int j=1; j<i+1; j++){
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    int r,c,w; cin>>r>>c>>w;
    long long ans =0;
    int k =0;
    for(int i=r-1; i<r+w-1; i++){
        for(int j=c-1; j<k+c; j++){
            ans += arr[i][j];
        }
        k++;
    }
    cout<<ans;
}
