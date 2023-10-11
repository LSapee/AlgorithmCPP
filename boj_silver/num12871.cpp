#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;cin>>s;
    string ss;cin>>ss;
    string str =s;
    string str2 =ss;
    int ans = 1;
    while(str.size()!=str2.size()){
        if(str2.size()>str.size()) {str+=s;continue;}
        if(str.size()>str2.size()) {str2+=ss;continue;}
    }
    for(int i=0; i<str.size(); i++){
        if(str[i]!=str2[i]){ans=0; break;}
    }
    cout<<ans;
    return 0;
}