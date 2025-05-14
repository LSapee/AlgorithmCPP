#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    vector<string> arr(n);
    vector<vector<int>> rec(n,vector<int>(m,0));
    for(int i=0; i<n; i++)cin>>arr[i];
    int ans =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0||j==0){
                if(arr[i][j]=='1')rec[i][j]=1;
            }else{
                if(arr[i][j]=='1'){
                    rec[i][j]= min({rec[i-1][j],rec[i][j-1],rec[i-1][j-1]})+1;
                }else{
                    rec[i][j]= 0;
                }
            }
            ans = max(ans,rec[i][j]);
        }
    }
    cout<<ans*ans;
    return 0;
}
