#include <bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        int n,m;cin>>n>>m;
        int cnt =0;
        vector<int> arr;
        for(int i=0; i<m; i++){
            int a,b;cin>>a>>b;
            arr.push_back(a*b);
        }
        sort(arr.rbegin(),arr.rend());
        for(int i=0; i<arr.size(); i++){
            n-= arr[i];
            cnt++;
            if(n<=0)break;
        }
        cout<<cnt<<"\n";
    }
}