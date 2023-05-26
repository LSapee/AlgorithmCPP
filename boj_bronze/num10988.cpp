#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;cin>>s;
    int k =s.size()-1;
    int ans =1;
    for(int i=0; i<s.size()/2; i++) if(s[i]!=s[k-i]) {ans=0;
            break;}
    cout<<ans;
}
