#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin>>n>>m;
    long long count =0;
    long long dp[n];
    long long dp2[m];
    for(int i=0; i<m; i++){
        dp2[i]=0;
    }
    cin>>dp[0];
    for(int i=1; i<n; i++){
        int a;cin>>a;
        dp[i] = dp[i-1]+ a;
    }
    for(int i=0; i<n; i++){
        int a = dp[i]%m;
        if(a==0)count++;
        dp2[a]++;
    }
    for(int i=0;i<m; i++){
        if(dp2[i]>1){
            count= count+ dp2[i]*(dp2[i]-1)/2;
        }
    }
    cout<<count;
}
