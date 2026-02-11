#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int> alpha;
vector<string> alphaS ={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

int cnt;
bool ok = false;

void solve(string &s){
    cnt = s.size();
    ok=false;
    for(auto a: s)alpha[a-65]++;
    while(alpha['Z'-65]>0){
        ans[0]++;
        alpha['Z'-65]--;
        alpha['E'-65]--;
        alpha['R'-65]--;
        alpha['O'-65]--;
    }
    while(alpha['G'-65]>0){
        ans[8]++;
        alpha['E'-65]--;
        alpha['I'-65]--;
        alpha['G'-65]--;
        alpha['H'-65]--;
        alpha['T'-65]--;
    }
    while(alpha['X'-65]>0){
        ans[6]++;
        alpha['S'-65]--;
        alpha['I'-65]--;
        alpha['X'-65]--;
    }
    while(alpha['H'-65]>0){
        ans[3]++;
        alpha['T'-65]--;
        alpha['H'-65]--;
        alpha['R'-65]--;
        alpha['E'-65]--;
        alpha['E'-65]--;
    }
    while(alpha['R'-65]>0){
        ans[4]++;
        alpha['F'-65]--;
        alpha['O'-65]--;
        alpha['U'-65]--;
        alpha['R'-65]--;
    }
    while(alpha['F'-65]>0){
        ans[5]++;
        alpha['F'-65]--;
        alpha['I'-65]--;
        alpha['V'-65]--;
        alpha['E'-65]--;
    }
    while(alpha['V'-65]>0){
        ans[7]++;
        alpha['S'-65]--;
        alpha['E'-65]--;
        alpha['V'-65]--;
        alpha['E'-65]--;
        alpha['N'-65]--;
    }
    while(alpha['W'-65]>0){
        ans[2]++;
        alpha['T'-65]--;
        alpha['W'-65]--;
        alpha['O'-65]--;
    }
    while(alpha['I'-65]>0){
        ans[9]++;
        alpha['N'-65]--;
        alpha['I'-65]--;
        alpha['N'-65]--;
        alpha['E'-65]--;
    }
    while(alpha['O'-65]>0){
        ans[1]++;
        alpha['O'-65]--;
        alpha['N'-65]--;
        alpha['E'-65]--;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T; cin>>T;
    int start = 1;
    while(T--){
        ans.assign(10,0);
        alpha.assign(26,0);
        string s; cin>>s;
        solve(s);
        cout<<"Case #"<<start<<": ";
        start++;
        for(int i=0; i<10; i++){
            for(int j=0; j<ans[i]; j++)cout<<i;
        }
        cout<<"\n";
    }
}
