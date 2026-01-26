#include <bits/stdc++.h>
using namespace std;

// 단순하게 i,j일때만 카운팅 하는 방법.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin>>s;
    int n = s.size();
    int cnt =0;
    for(int i=0; i<n; i++){
        if(s[i]=='i')cnt++;
        if(s[i]=='j')cnt++;
    }
    cout<<cnt;
    return 0;
}