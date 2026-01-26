#include <bits/stdc++.h>
using namespace std;

// play중이면 sound가 3이상일경우 yes출력하는 프로그램.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    int sound = 0;
    bool stopOrPlay = false;
    while(T--){
        int a;cin>>a;
        if(a == 1){
            sound++;
        }else if(a==2){
            sound = sound>0 ? sound-1 : 0;
        }else {
            stopOrPlay = !stopOrPlay;
        }
        if(stopOrPlay && sound >=3)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}