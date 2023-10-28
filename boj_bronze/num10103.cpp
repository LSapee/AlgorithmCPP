#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int cy=100,sd=100;
    for(int i=0; i<n; i++){
        int a,b;cin>>a>>b;
        if(a>b) sd-=a;
        if(b>a) cy-=b;
    }
    cout<<cy<<"\n";
    cout<<sd;
}