#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int arr[n+1][n+1];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>arr[i][j];
    queue<int> Q;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[i][j]==1)Q.push(j);
            while(!Q.empty()){
                int k = Q.front(); Q.pop();
                for(int z = 1; z<=n; z++){
                    if(arr[k][z] ==0)continue;
                    if(arr[i][z] ==1)continue;
                    arr[i][z] = 1;
                    Q.push(z);
                }
            }
        }
    }

    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}