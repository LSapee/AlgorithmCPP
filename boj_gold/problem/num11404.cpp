#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int v,e; cin>>v>>e;
    int arr[v+1][v+1];
    fill(&arr[0][0],&arr[v+1][0],INF);
    for(int i=0; i<e; i++){
        int a,b,cost;cin>>a>>b>>cost;
        arr[a][b] = min(arr[a][b],cost);
    }
    for(int i=1; i<=v; i++) arr[i][i] =0;

    for(int i=1; i<=v; i++)
        for(int j=1; j<=v; j++)
            for(int k=1; k<=v; k++)
                arr[j][k] = min(arr[j][k],arr[j][i]+arr[i][k]);

    for(int i=1; i<=v; i++){
        for(int j=1; j<=v; j++){
            if(arr[i][j]==INF) cout<<"0 ";
            else cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


}