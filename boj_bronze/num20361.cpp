#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,k;cin>>n>>x>>k;
    vector<int> arr(n+1,0);
    arr[x]=1;
    int ans =0;
    for(int i=0; i<k; i++){
        int a,b;cin>>a>>b;
        swap(arr[a],arr[b]);
    }
    for(int i=1; i<n; i++) if(arr[i]==1) {
        cout<<i;
        break;
    }
    return  0;

}