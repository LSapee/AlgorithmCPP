#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    fib.push_back(1);
    for(int i=3; i<=N; i++){
        fib.push_back(1);
        fib[i] = ((fib[i-2]%mod)+(fib[i-1]%mod))%mod;
    }
    cout<<fib[N];
}