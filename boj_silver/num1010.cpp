#include <bits/stdc++.h>
using namespace std;

int arr[30][30];

int bridge(int a,int b){
    if(arr[a][b]>0) return arr[a][b];
    if(a==b || b==0) return arr[a][b] = 1;
    return arr[a][b] = bridge(a-1,b-1)+ bridge(a-1,b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n,m; cin>>n>>m;
        cout<<bridge(m,n)<<"\n";
    }
}