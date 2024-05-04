#include <bits/stdc++.h>
using namespace std;

string s;
int k;
bool vis[10];
int cnt = 0;
bool ok =false;
string ans = "";

void back(string ss){
    if(ss.size()==s.size()){
        cnt++;
        if(cnt==k){
            ans = ss;
            ok=true;
        }
        return;
    }
    for(int i=0; i<s.size(); i++){
        if(vis[i])continue;
        if(ok)return ;
        vis[i]=true;
        back(ss+s[i]);
        vis[i]=false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>s){
        cin>>k;
        ok= false;
        cnt=0;
        ans.clear();
        back("");
        cout<<s<<" "<<k<<" = ";
        if(ok)cout<<ans<<"\n";
        else cout<<"No permutation\n";
    }
}