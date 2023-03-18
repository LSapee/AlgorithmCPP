#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,ss;
    cin>>s>>ss;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='6') s[i]='5';
    }
    for(int i=0; i<ss.size(); i++){
        if(ss[i]=='6') ss[i]='5';
    }
    int MN = stoi(s)+stoi(ss);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='5') s[i]='6';
    }
    for(int i=0; i<ss.size(); i++){
        if(ss[i]=='5') ss[i]='6';
    }
    int MX =stoi(s)+stoi(ss);
    cout<<MN <<" "<< MX;
}