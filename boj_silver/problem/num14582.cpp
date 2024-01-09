#include <bits/stdc++.h>
using namespace std;
int j[9];
int g[9];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    bool ok = false;
    for(int i=0; i<9; i++)cin>>j[i];
    for(int i=0; i<9; i++)cin>>g[i];
    int jsum =0;
    int gsum =0;
    for(int i=0; i<9; i++){
        jsum+=j[i];
        if(jsum>gsum)ok=true;
        gsum+=g[i];
    }


    if(ok) cout<<"Yes";
    else cout<<"No";
}