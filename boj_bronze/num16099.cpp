#include <iostream>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<n; i++){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a*b>c*d) cout<<"TelecomParisTech\n";
        if(a*b<c*d) cout<<"Eurecom\n";
        if(a*b==c*d) cout<<"Tie\n";
    }
}
