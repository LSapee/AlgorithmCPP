#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l,a,b,c,d;
    cin>>l>>a>>b>>c>>d;

    if(a%c>0){
        a= a/c+1;
    }else{
        a= a/c;
    }
    if(b%d>0){
        b = b/d+1;
    }else{
        b = b/d;
    }

    cout<<l-max(a,b);
}
