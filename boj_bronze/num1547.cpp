#include <iostream>

using namespace std;

int arr[4];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[1] =1;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a,b;cin>>a>>b;
        int c = arr[a];
        arr[a]=arr[b];
        arr[b]=c;
    }
    if(arr[1]==1) cout<<1;
    else if(arr[2]==1) cout<<2;
    else cout<<3;
}
