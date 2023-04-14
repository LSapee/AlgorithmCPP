#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
void mn(int p,int k){
    if(k==m){
        for(int i=0; i<m; i++)cout<<arr[i]<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=p; i<=n; i++){
        arr[k]=i;
        mn(i,k+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    mn(1,0);
}
