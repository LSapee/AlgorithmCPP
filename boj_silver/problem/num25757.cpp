#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    char t;cin>>t;
    set<string> s;
    for(int i=0; i<n; i++){
        string ss;cin>>ss;
        s.insert(ss);
    }
    if(t=='Y')cout<<s.size();
    else if(t=='F') cout<<s.size()/2;
    else if(t=='O') cout<<s.size()/3;
}