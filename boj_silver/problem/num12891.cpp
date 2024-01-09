#include <bits/stdc++.h>
using namespace std;

int A,C,G,T;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //n 문자 길이
    //m 내가 사용할 비밀번호 길이
    int n,m;cin>>n>>m;
    string s;cin>>s;
    cin>>A>>C>>G>>T;
    int a=0,c=0,g=0,t=0;
    int cnt=0;
    queue<char> Q;
    for(int i=0; i<m; i++){
        Q.push(s[i]);
        if(s[i]=='A')a++;
        if(s[i]=='C')c++;
        if(s[i]=='G')g++;
        if(s[i]=='T')t++;
    }
    if(a>=A&&c>=C&&g>=G&&t>=T) cnt++;
    for(int i=m; i<n; i++){
        char k = Q.front(); Q.pop();
        if(k=='A')a--;
        if(k=='C')c--;
        if(k=='G')g--;
        if(k=='T')t--;
        Q.push(s[i]);
        if(s[i]=='A')a++;
        if(s[i]=='C')c++;
        if(s[i]=='G')g++;
        if(s[i]=='T')t++;
        if(a>=A&&c>=C&&g>=G&&t>=T) cnt++;
    }
    cout<<cnt;
}