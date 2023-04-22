#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double n,m,k;cin>>n>>m>>k;

    int a= n*m/k;
    int b= n/m*k;
    cout<<max(a,b);
}