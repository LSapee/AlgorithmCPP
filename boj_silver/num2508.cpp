#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string s[n];
        int ans=0;
        for(int i=0;i<n; i++)cin>>s[i];
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                if(s[i][j]=='>'){
                    int a =j+1;
                    int b = j+2;
                    if(a>=m||b>=m)continue;
                    if(s[i][a]=='o'&&s[i][b]=='<')ans++;
                }else if(s[i][j]=='v'){
                    int a =i+1;
                    int b = i+2;
                    if(a>=n||b>=n)continue;
                    if(s[a][j]=='o'&&s[b][j]=='^')ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }

}