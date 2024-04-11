#include <bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        int n;cin>>n;
        int cnt =0;
        int cnt2 = 0;
        for(int i=0; i<n; i++){
            char a,b;cin>>a>>b;
            if(a==b)continue;
            if((a=='R'&&b=='S')||(a=='S'&&b=='P')||(a=='P'&&b=='R'))cnt++;
            else cnt2++;
        }
        if(cnt>cnt2)cout<<"Player 1\n";
        else if(cnt==cnt2)cout<<"TIE\n";
        else cout<<"Player 2\n";
    }
}