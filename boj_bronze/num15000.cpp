#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;cin>>s;
    for(int i=0; i<s.size(); i++)cout<<(char)(s[i]-32);
}