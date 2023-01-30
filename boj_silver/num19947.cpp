#include <bits/stdc++.h>
using namespace std;

int Y[11];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    Y[0] = n;
    for(int i=1; i<=m; i++){
        Y[i] += Y[i-1]*1.05;
        if(i>=3) Y[i] = max(Y[i-1]*1.05,Y[i-3]*1.2);
        if(i>=5) Y[i] = max(max(Y[i-1]*1.05,Y[i-3]*1.2),Y[i-5]*1.35);
    }
    cout<<Y[m];
}