#include <bits/stdc++.h>
using namespace std;

int N,r,c;

int z(int a, int b, int k){
    if(k==0) return 0;
    int half = 1<<(a-1);
    cout<<half<<"\n";
    if(r<half && c< half) return z(a-1,b,k);
    if(r<half && c>= half) return half*half +z(a-1,b,k-half);
    if(r>=half && c< half) return 2*half*half + z(a-1,b-half,k);
    return 3*half*half +z(a-1,b-half,k-half);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>r>>c;
    cout<< z(N,r,c);

}