#include <bits/stdc++.h>
using namespace std;


string zeroX(string s){
    int st = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') {
            st=i;
            break;
        }
    }
    if(st==0) return "0";
    return s.substr(st,s.size());
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    string ss;
    cin>>s>>ss;
    if(s[0]=='0') s = zeroX(s);
    if(ss[0]=='0') ss = zeroX(ss);
    if(s[0]=='0'){
        cout<<ss;
        return 0;
    }
    if(ss[0]=='0'){
        cout<<s;
        return 0;
    }
    if(ss.size()>s.size())swap(s,ss);
    stack<int> arr1;
    stack<int> arr2;
    stack<int> ans;
    for(int i=0; i<s.size(); i++)arr1.push(s[i]-'0');
    for(int i=0; i<ss.size(); i++)arr2.push(ss[i]-'0');
    bool ok =false;
    while(!arr2.empty()){
        int k = arr1.top();arr1.pop();
        int kk = arr2.top(); arr2.pop();
        if(ok) {
            ok=false;
            k++;
        }
        k+=kk;
        if(k>=2){
            k-=2;
            ok=true;
        }
        ans.push(k);
    }
    while(!arr1.empty()){
        int k =arr1.top();arr1.pop();
        if(ok){
            ok= false;
            k++;
        }
        if(k>=2){
            k-=2;
            ok=true;
        }
        ans.push(k);
    }
    if(ok)ans.push(1);

    while(!ans.empty()){
        cout<<ans.top();
        ans.pop();
    }
}