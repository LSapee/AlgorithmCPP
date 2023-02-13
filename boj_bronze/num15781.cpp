#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int j=INT_MIN,h=INT_MIN;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        j= max(j,a);
    }
    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        h =max(h,a);
    }
    cout<<j+h;
}