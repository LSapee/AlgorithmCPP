#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    int arr[4] = {25,10,5,1};
    while(T--){
        int k;cin>>k;
        for(int i=0; i<4; i++){
            cout<<k/arr[i]<<" ";
            k=k%arr[i];
        }
        cout<<"\n";
    }
    return 0;
}
