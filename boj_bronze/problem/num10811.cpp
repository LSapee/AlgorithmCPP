#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++) arr[i]=i;
    for(int i=0; i<m; i++){
        int st,ed;cin>>st>>ed;
        for(int j =st; j<=ed; j++)swap(arr[j],arr[ed--]);
    }
    for(int i=1; i<=n; i++) cout<<arr[i]<<" ";
}