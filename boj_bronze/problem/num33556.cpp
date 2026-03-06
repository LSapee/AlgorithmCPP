#include <bits/stdc++.h>
using namespace std;

bool check(string &s,string &ss){
    int n = s.size();
    if(ss.size()!=n)return false;
    for(int i=0; i<n; i++){
        if(s[i]==ss[i])continue;
        if(abs(s[i]-ss[i])!=32)return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s,ss;cin>>s>>ss;
    if(s=="null"){
        cout<<"NullPointerException\n";
        cout<<"NullPointerException";
        return 0;
    }
    if(ss=="null"){
        cout<<"false\n";
        cout<<"false";
        return 0;
    }
    if(s==ss){
        cout<<"true\n";
    }else{
        cout<<"false\n";
    }
    if(check(s,ss)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;

}