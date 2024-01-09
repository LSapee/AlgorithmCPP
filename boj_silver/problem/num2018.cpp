#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int count =0;
    int sum =0;
    int st=1;
    for(int i=1; i<=n; i++){
        sum+=i;
        if(sum==n) count++;
        if(sum>n){
            for(int j=st;j<n; j++){
                sum-=j;
                if(sum==n)count++;
                if(sum<n){
                    st=j+1;
                    break;
                }
            }
        }
    }
    cout<<count;
}
