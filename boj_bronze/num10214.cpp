#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int s,k;
        for(int j=0; j<9; j++){
            int a,b;
            cin>>a>>b;
            s+=a;
            k+=b;
        }
        if(s>k) cout<<"Yonsei\n";
        if(k>s) cout<<"Korea\n";
        if(k==s) cout<<"Draw\n";
    }
}