#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){

    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin>>s;
    int n=0,m=0;
    bool ok = false;
    for(int i=0; i<s.size(); i++){
        if(s[i]==':'){
            ok = true;
            continue;
        }
        if(ok== false){
            n*=10;
            n += s[i]-'0';
        }else{
            m*=10;
            m += s[i]-'0';
        }
    }

    int k = gcd(n,m);
    cout<<n/k<<":"<<m/k;
}