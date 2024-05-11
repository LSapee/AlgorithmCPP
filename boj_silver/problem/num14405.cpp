#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    string arr[3] ={"pi","ka","chu"};
    string ss;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='p')ss+=arr[0];
        if(s[i]=='k')ss+=arr[1];
        if(s[i]=='c')ss+=arr[2];
    }
    if(ss.compare(s)==0)cout<<"YES";
    else cout<<"NO";
}