#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        if(n/m==0 && m%n==0) cout<<"factor\n";
        else if(n%m==0) cout<<"multiple\n";
        else cout<<"neither\n";
    }
    return 0;
}