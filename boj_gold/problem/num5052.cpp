#include <bits/stdc++.h>
using namespace std;

int T;

bool isPrefixWord(string &s, string &ss){
    for(int i=0; i<ss.size(); i++) if(s[i]!=ss[i])return false;
    return true;
}


bool check(vector<string> &sArr,int n){
    for(int i=n-1; i>=0; i--){
        for(int j =0; j<i; j++){
            if(sArr[i][0]!=sArr[j][0])continue;
            if(isPrefixWord(sArr[i],sArr[j]))return false;
            else continue;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        int n;cin>>n;
        vector<string> arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        if(check(arr,n))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}