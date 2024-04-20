#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s;
        getline(cin,s);
        if(s[0]>=97)s[0]-=32;
        cout<<s<<"\n";
    }
}