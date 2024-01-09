#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0; i<9; i++){
        int a; cin>>a;
        n-=a;
    }
    cout<<n;
}