#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    string s;
    cin>>s;
    int height =10;
    for(int i=1; i<s.size(); i++){
        if(s[i-1]==s[i])height+=5;
        else height+=10;
    }
    cout<<height;
}