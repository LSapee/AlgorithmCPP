#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++){
        vector<int> temp(n,0);
        for(int j=0; j<n; j++) cin>>temp[j];
        arr.push_back(temp);
    }
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            for(int k =0; k<n; k++){
                arr[j][k] = min(arr[j][k],arr[j][i]+arr[i][k]);
            }
        }
    }
    while(m--){
        int a,b,t;cin>>a>>b>>t;
        a--;
        b--;
        if(arr[a][b]<=t)cout<<"Enjoy other party\n";
        else cout<<"Stay here\n";
    }
}