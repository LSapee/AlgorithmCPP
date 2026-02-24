#include <bits/stdc++.h>
using namespace std;

int T;
vector<string> arr;
bool compare(const string& a, const string& b) {
    return a+b > b+a;
}

void input(){
    cin>>T;
    for(int i=0; i<T; i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    sort(arr.begin(),arr.end(),compare);
}

void solve(){
    string ans = "";
    if(arr[0][0]=='0'){
        cout<<0;
        return ;
    }
    for(int i=0; i<T; i++)ans+=arr[i];
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
