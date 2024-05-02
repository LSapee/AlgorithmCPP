#include <bits/stdc++.h>
using namespace std;

bool vis[5];
string s;
void back(string ans){
    if(ans.size()==s.size()){
        cout<<ans<<"\n";
        return ;
    }
    for(int i=0; i<s.size(); i++){
        if(vis[i])continue;
        vis[i]=true;
        back(ans+s[i]);
        vis[i]=false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int number = 1;
    while(n--){
        cout<<"Case # "<<number<<":\n";
        cin>>s;
        fill(vis,vis+5,false);
        back("");
        number++;
    }
}