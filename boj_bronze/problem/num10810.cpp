#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0; i<m; i++){
        int a,b,c;cin>>a>>b>>c;
        for(int j=a-1; j<=b-1; j++){
            arr[j]=c;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
