#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    string ss="";
    if(s[0]=='I')ss+="E";
    if(s[0]=='E')ss+="I";
    if(s[1]=='S')ss+="N";
    if(s[1]=='N')ss+="S";
    if(s[2]=='T')ss+="F";
    if(s[2]=='F')ss+="T";
    if(s[3]=='J')ss+="P";
    if(s[3]=='P')ss+="J";
    cout<<ss;
}