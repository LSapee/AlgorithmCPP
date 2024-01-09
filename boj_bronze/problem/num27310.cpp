#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    int n = s.size();
    int c =0;
    int u =0;

    for(int i=0; i<s.size(); i++){
        if(s[i]==':')c++;
        if(s[i]=='_')u++;
    }
    cout<<n+c+(u*5);
}