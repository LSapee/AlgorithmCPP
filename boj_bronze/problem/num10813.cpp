#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    vector<int> arr;
    for(int i=0; i<n; i++){
        arr.push_back(i+1);
    }
    for(int i=0;i<m; i++){
        int a,b;cin>>a>>b;
        a--;
        b--;
        int k=arr[a];
        arr[a]=arr[b];
        arr[b]=k;
    }
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
}
