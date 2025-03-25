#include <bits/stdc++.h>
#define MOD 1234567891
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    string s;cin>>s;
    long long sum =0;
    for(int i=0; i<n; i++){
        int k =s[i]-'a';
        long long num =1;
        for(int j=0; j<i; j++){
            num=(num *31)%MOD;
        }
        sum+=(num*(k+1))%MOD;
    }
    cout<<sum;
    return 0;
}
