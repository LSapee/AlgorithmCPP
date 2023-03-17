#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    int use =0;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a; cin>>a;
        use += (a/2)+(a%2);
    }
    if(use>=n) cout<<"YES";
    else cout<<"NO";
}
