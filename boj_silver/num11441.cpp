#include <bits/stdc++.h>
using namespace std;

long long arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int c;
        cin>>c;
        arr[i] = arr[i-1]+c;
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<"\n";
    }


}
