#include <bits/stdc++.h>
using namespace std;

int makeZ(int a, int b, int k){
    if(a==0) return 0;
    int half = 1<<(a-1);
    if(b<half && k< half) return makeZ(a-1,b,k);
    if(b<half && k>= half) return half*half +makeZ(a-1,b,k-half);
    if(b>=half && k< half) return 2*half*half + makeZ(a-1,b-half,k);
    return 3*half*half + makeZ(a-1,b-half,k-half);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,r,c;
    cin>>N>>r>>c;
    cout<< makeZ(N,r,c);

}