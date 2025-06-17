#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,Q;cin>>N>>Q;
    vector<int> arr(N+1,-1);
    for(int i=0; i<Q; i++){
        int k;cin>>k;
        int temp = k;
        int ans =0;
        while(k>1){
            if(arr[k]!=-1) {
                ans = k;
                // break걸면 그 전에 걸렸을 땡 못 찾아감.
            }
            k/=2;
        }
        if(ans==0) arr[temp] =1;
        cout<<ans<<"\n";
    }
    return 0;
}

