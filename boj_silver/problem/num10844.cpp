#include <bits/stdc++.h>
#define Mod 1000000000
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<vector<long long>> arr(n+1,vector<long long>(10,0));
    for(int i=1; i<10; i++){
        arr[1][i]=1;
    }
    for(int i=2; i<=n; i++){
        for(int j=0; j<10; j++){
            if(j==0){
                arr[i][j]= arr[i-1][j+1];
            }else if(j==9){
                arr[i][j]= arr[i-1][j-1];
            }else{
                arr[i][j]= arr[i-1][j-1]%Mod+arr[i-1][j+1]%Mod;
            }
        }
    }
    long long ans =0;
    for(int i=0; i<10; i++){
        ans+=arr[n][i];
    }
    cout<<ans%Mod;
}
