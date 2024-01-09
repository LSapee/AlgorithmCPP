#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    int cnt =0;
    for(int i=1; i<=n; i++){
        int k=i;
        while(k>0){
            if(k%10==m)cnt++;
            k/=10;
        }
    }
    cout<<cnt;
}