#include <bits/stdc++.h>
using namespace std;

int N,B,W;
string S;
int ans =0;
void input(){
    cin>>N>>B>>W;
    cin>>S;
}

void solve(){
    int Bcnt =0;
    int Wcnt =0;
    int st =0;
    for(int i=0; i<N; i++){
        if(S[i]=='B')Bcnt++;
        if(S[i]=='W')Wcnt++;
        if(Wcnt>=W && Bcnt<=B)ans = max(ans,Bcnt+Wcnt);
        while(Bcnt>B && st<i){
            if(S[st]=='B')Bcnt--;
            else Wcnt--;
            st++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    cout<<ans;
}
