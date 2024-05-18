#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t;cin>>n>>t;
    int cnt =0;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        t-=k;
        if(t==0){
            cnt++;break;
        }else if(t<0){
            break;
        }else{
            cnt++;
        }
    }
    cout<<cnt;
}