#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    int cnt = 0;
    string ss = "UCPC";
    for(int i=0; i<s.size(); i++){
        if(s[i]==ss[cnt])cnt++;
        if(cnt>=4)break;
    }
    if(cnt==4)cout<<"I love UCPC";
    else cout<<"I hate UCPC";
}