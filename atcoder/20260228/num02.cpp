#include <bits/stdc++.h>

using namespace std;

string S;
int MXcnt =0;
vector<int> arr;
void input(){
    cin>>S;
    arr.assign(26,0);
}
void solve(){
    int n =S.size();
    for(int i=0; i<n; i++){
        arr[S[i]-'a']++;
        MXcnt = max(arr[S[i]-'a'],MXcnt);
    }
    unordered_set<char> NU;
    for(int i=0; i<26; i++) if(arr[i]==MXcnt) NU.insert(i+'a');
    string ans ="";
    for(int i=0; i<n; i++){
        if(NU.find(S[i])!=NU.end())continue;
        ans+=S[i];
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