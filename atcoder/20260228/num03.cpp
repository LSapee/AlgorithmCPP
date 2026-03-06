#include <bits/stdc++.h>

using namespace std;

string S,SS;
vector<int> arrS;
vector<int> arrSS;
void input(){
    cin>>S>>SS;
    arrS.assign(26,0);
    arrSS.assign(26,0);
}

void solve(){
    int ans =0;
    queue<int> SAcnt;
    queue<int> SSAcnt;
    string ca = "";
    string ca2 = "";
    int cnt =0;
    for(auto a : S) {
        arrS[a-'A']++;
        if(a=='A')cnt++;
        else{
            ca+=a;
            SAcnt.push(cnt);
            cnt=0;
        }
    }
    if(cnt!=0)SAcnt.push(cnt);
    cnt=0;
    for(auto a : SS) {
        arrSS[a-'A']++;
        if(a=='A')cnt++;
        else{
            ca2 +=a;
            SSAcnt.push(cnt);
            cnt=0;
        }
    }
    if(cnt!=0)SSAcnt.push(cnt);
    // A 추가 삭제로 불가능할때.
    for(int i=1; i<26; i++){
        if(arrS[i]!=arrSS[i]){
            cout<<-1;
            return ;
        }
    }
    if(ca!=ca2){
        cout<<-1;
        return ;
    }
    while(!SAcnt.empty()){
        if(SSAcnt.empty())break;
        ans+= abs(SAcnt.front()-SSAcnt.front());
        SAcnt.pop();
        SSAcnt.pop();
    }
    while(!SAcnt.empty()){
        ans+=SAcnt.front();
        SAcnt.pop();
    }
    while(!SSAcnt.empty()){
        ans+=SSAcnt.front();
        SSAcnt.pop();
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    return 0;
}

