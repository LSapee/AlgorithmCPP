#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;cin>>n>>k;
    for(int i=0; i<k; i++){
        int a; cin>>a;
        int topNum;cin>>topNum;
        for(int j=0; j<a-1; j++){
            int number;cin>>number;
            if(number>topNum){cout<<"No";return 0;}
            topNum = number;
        }
    }
    cout<<"Yes";
   return 0;
}