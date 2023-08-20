#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        int k = s.size()-1;
        if((s[k]-'0') %2 ==0) cout<<"even\n";
        else cout<<"odd\n";
    }
    return 0;

}