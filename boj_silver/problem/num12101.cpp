#include <bits/stdc++.h>
using namespace std;

int n,k;
int cnt = 0;
bool ok =false;
string ans ="-1";
void back(string s,int num){
    if(num>=n){
        if(num==n){
            cnt++;
            if(cnt==k&&ok==false){
                ok =true;
                ans = s;
            }
        }
        return;
    }
    for(int i=1; i<=3; i++){
        string ss = to_string(i) + "+";
        back(s+ss,num+i);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    back("",0);
    if(ok)ans.resize(ans.size()-1);
    cout<<ans;
}