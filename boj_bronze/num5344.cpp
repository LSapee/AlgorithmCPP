#include <bits/stdc++.h>
using namespace std;

int gcd(int z,int zz){
    if(zz==0) return z;
    else return gcd(zz,z%zz);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int b,c;
        cin>>b>>c;
        cout<<gcd(b,c)<<"\n";
    }

}
