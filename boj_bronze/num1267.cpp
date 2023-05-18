#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    int Y=0,M=0;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        if(a%29) Y+=10;
        if(a%59) M+=15;
        Y+= (a/30)*10;
        M+= (a/60)*15;
    }
    if(Y>M) cout<<"M "<<M;
    else if (Y<M) cout<<"Y "<<Y;
    else cout<<"Y M "<<M;

}