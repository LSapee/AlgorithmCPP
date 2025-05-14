#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,ss;cin>>s>>ss;
    int n = s.size(), m=ss.size();
    vector<vector<int>> ans(n,vector<int>(m,0));
    if(s[0]==ss[0])ans[0][0] =1;
    for(int i=1; i<n; i++){
        if(s[i]==ss[0])ans[i][0] =1;
        else ans[i][0] = ans[i-1][0];
    }
    for(int i=1; i<m; i++){
        if(s[0]==ss[i])ans[0][i] =1;
        else ans[0][i] = ans[0][i-1];
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(s[i]==ss[j])ans[i][j] = max({ans[i-1][j-1]+1,ans[i-1][j],ans[i-1][j]});
            else ans[i][j] = max({ans[i-1][j-1],ans[i-1][j],ans[i][j-1]});
        }
    }
    cout<<ans[n-1][m-1];
}
