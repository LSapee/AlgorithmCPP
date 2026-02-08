#include <bits/stdc++.h>
using namespace std;

string S;
void input(){
    cin>>S;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    if(S[0] == S[1] && S[0] == S[2])cout<<"Yes";
    else cout<<"No";
    return 0;
}