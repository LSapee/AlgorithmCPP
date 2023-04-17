#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    int arr[1025][1025];
    long long arr2[1025][1025];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int a; cin>>a;
            arr[i][j] = a;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            arr2[i][j] = arr2[i][j-1] + arr2[i-1][j] -arr2[i-1][j-1] + arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        int x,y,xx,yy; cin>>x>>y>>xx>>yy;
        cout<<arr2[xx][yy] -arr2[x-1][yy] -arr2[xx][y-1] + arr2[x-1][y-1]<<"\n";
    }
}

