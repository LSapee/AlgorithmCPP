#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;cin>>n>>k;
    string s="";
    while(n>0){
        int p = n%k;
        n/=k;
        if(p>9)s=(char)(p-10+'A')+s;
        else s= to_string(p)+s;
    }
    cout<<s;
}
