#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];

        }

    }
    int T;
    cin>>T;
    for(int i=0;i<T; i++){
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        sx-=1;
        sy-=1;
        ex-=1;
        ey-=1;
        int sum =0;
        for(int j=sx; j<=ex; j++){
            for(int k=sy; k<=ey; k++){
                sum+=arr[j][k];
            }
        }
        cout<<sum<<"\n";
    }
}
