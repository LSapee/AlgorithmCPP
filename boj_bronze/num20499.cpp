#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int k,d,a,count=0;
    string ss;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='/'){
            if(count==0){
                k = stoi(ss);
                ss="";
                count++;
                continue;
            }else{
                d= stoi(ss);
                ss="";
                continue;
            }
        }
        ss = ss+s[i];
    }
    a = stoi(ss);
    if(k+a<d || d==0) cout<<"hasu";
    else cout<<"gosu";
}