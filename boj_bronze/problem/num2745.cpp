#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans = 0;
    string s;
    cin>>s;
    int k;cin>>k;
    int t= 0;
    int i =s.size();
    while(i--){
        if(s[i]-'0'<10){
            ans+= (s[i]-'0')*pow(k,t);
        }else{
            ans+= ((s[i]-'A')+10)*pow(k,t);
        }
        t++;
    }
    cout<<ans;
}