#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    n = n/2;
    m = m/2;
    if(n>=m){
        cout<<m;
    }else{
        cout<<n;
    }

}
