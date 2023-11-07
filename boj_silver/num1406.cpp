#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    list<char> L;
    string s;cin>>s;
    for(int i=0;i<s.size(); i++) L.push_back(s[i]);
    list<char>::iterator t = L.end();
    int n;cin>>n;
    for(int i=0; i<n; i++){
        char a;cin>>a;
        if(a=='P'){
            char add; cin>>add;
            L.insert(t,add);
        }else if(a =='L'){
            if(t!=L.begin()) t--;
        }else if(a=='D'){
            if(t!=L.end()) t++;
        }else{
            if(t!=L.begin()){
                t--;
                t = L.erase(t);
            }
        }
    }
    for(auto c : L)cout<<c;
}