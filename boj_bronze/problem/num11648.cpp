#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,count=0;cin>>n;
    int k=1;
    if(n<10){
        cout<<0;
        return 0;
    }
    while(1){
        k *= n%10;
        n/=10;
        if(n==0){
            n=k;
            k=1;
            count++;
            if(n<10){
                break;
            }
        }
    }
    cout<<count;
}