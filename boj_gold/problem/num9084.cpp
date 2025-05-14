#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        int n,m;cin>>n;
        vector<int> arr(n);
        vector<vector<int>> D(n,vector<int> (10001,0));
        for(int i=0; i<n; i++){
            cin>>arr[i];
            D[i][0] = 1;
        }
        cin>>m;
        for(int i=0; i<n; i++){
            for(int j=1; j<=m; j++){
                if(i-1>=0) D[i][j] += D[i-1][j];
                if(j-arr[i]>=0) D[i][j] += D[i][j-arr[i]];
            }
        }
        cout<<D[n-1][m]<<"\n";
    }
    return 0;
}