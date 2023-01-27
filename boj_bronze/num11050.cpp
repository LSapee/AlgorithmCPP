#include <iostream>
using namespace std;

int main(){
    int n,m,a=1,b=1,c,d=1;
    cin>>n>>m;
    c=n-m;
    for(int i=1; i<=n; i++){
        a*=i;
    }
    for(int i=1; i<=m; i++){
        b*=i;
    }
    for(int i=1; i<=c; i++){
        d*=i;
    }
    cout<<a/(b*d);
}