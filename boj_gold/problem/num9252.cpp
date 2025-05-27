#include <bits/stdc++.h>
using namespace std;
int n,m;

string newWord(string &s1,string &s2,vector<vector<int>> &ans){
    int i= n-1;
    int j= m-1;
    string s = "";
    while(1){
        if (i == 0 || j == 0){
            break;
        }
        if (ans[i][j] == ans[i][j - 1])
            j -= 1;
        else if (ans[i][j] == ans[i - 1][j])
            i -= 1;
        else {
            s += s1[i];
            i -= 1;
            j -= 1;
        }
    }
    if(i == 0){
        if(j >= 0 && ans[i][j] == 1) s += s1[i];
    }else {
        if(j == 0 && i >= 0 && ans[i][j] == 1) s += s2[j];
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,ss;cin>>s>>ss;
    n= s.size();
    m=ss.size();
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
            if(s[i]==ss[j])ans[i][j] = max({ans[i-1][j-1]+1,ans[i-1][j],ans[i][j-1]});
            else ans[i][j] = max({ans[i-1][j-1],ans[i-1][j],ans[i][j-1]});
        }
    }
    if(ans[n-1][m-1]==0){
        cout<<0;
        return 0;
    }
    string s2 = newWord(s,ss,ans);
    cout<<ans[n-1][m-1]<<"\n";
    cout<<s2;
    return 0;
}
