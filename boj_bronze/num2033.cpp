#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int a =1;
    int b=0;
    while(n>10){
        b = n%10;
        if(b>=5)n+=10;
        n/=10;
        a*=10;
    }

    cout<<n*a;
}