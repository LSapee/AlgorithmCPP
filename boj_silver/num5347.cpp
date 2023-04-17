#include <iostream>
using namespace std;

long long LCM(long long a,long long b){
    if(a%b==0){
        return b;
    }else{
        return LCM(b,a%b);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    for(int i=0; i<n; i++){
        long long a,b; cin>>a>>b;
        long long k = LCM(a,b);
        cout<<a/k*b<<"\n";
    }
}
