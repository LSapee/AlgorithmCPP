#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double st,f;
    cin>>st;
    while(cin>>f){
        if(f==999) break;
        cout<<fixed;
        cout.precision(2);
        cout<<f-st<<"\n";
        st=f;
    }
}