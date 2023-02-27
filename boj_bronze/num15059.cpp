#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int sum =0;
    if(d-a>0){
        sum+=d-a;
    }
    if(e-b>0){
        sum+=e-b;
    }
    if(f-c>0){
        sum+=f-c;
    }
    cout<<sum;
}