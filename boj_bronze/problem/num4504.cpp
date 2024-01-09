#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    int a;
    while(cin>>a){
        if(a==0)break;
        if(a%n!=0) cout<<a<<" is NOT a multiple of "<<n<<".\n";
        if(a%n==0) cout<<a<<" is a multiple of "<<n<<".\n";
    }
}
