#include <bits/stdc++.h>
using namespace std;

bool primeNumber[10000002];
long long st,ed;
long long cnt =0;
void pm(){
    for(long long i=2; i*i<=ed; i++){
        long long k = i*i;
        long long f = (st/k);
        if(st%k!=0)f++;
        for(long long j=f; k*j<=ed; j++) primeNumber[(int)((j*k)-st)]= true;

    }
    for(long long i=0; i<=ed-st; i++) if(!primeNumber[i]) cnt++;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>st>>ed;
    pm();
    cout<<cnt;
}