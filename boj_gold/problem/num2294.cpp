#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,target;cin>>n>>target;
    vector<int> arr(target+1,target+1);
    vector<int> coins;
    for(int i=0; i<n; i++){
        int a; cin>>a;coins.push_back(a);
    }
    arr[0] =0;
    for(int i=1; i<=target; i++){
        for(int k:coins){
            if(i-k<0)continue;
            arr[i] = min(arr[i],arr[i-k]+1);
        }
    }
    int ans = arr[target] == target+1 ? -1 :arr[target];
    cout<<ans;
    return 0;
}
