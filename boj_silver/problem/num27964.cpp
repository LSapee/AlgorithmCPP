#include <bits/stdc++.h>
using namespace std;

int n;
bool check(string s,int k){
    if(s[k-1]!='e')return false;
    if(s[k-2]!='s')return false;
    if(s[k-3]!='e')return false;
    if(s[k-4]!='e')return false;
    if(s[k-5]!='h')return false;
    if(s[k-6]!='C')return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    set<string> topping;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        int k = s.size();
        if(k<6)continue;
        bool ok = check(s,k);
        if(ok)topping.insert(s);
    }
    if(topping.size()>=4)cout<<"yummy";
    else cout<<"sad";
}