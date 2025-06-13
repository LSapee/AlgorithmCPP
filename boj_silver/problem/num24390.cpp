#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s;
    int m = stoi(s.substr(0,3));
    int ss = stoi(s.substr(3,5));
    int time = (m*60)+ss;
    int ans = 0;
    bool useThirtyButton = false;
    // 그리디
    if(time>=600){
        ans+=time/600;
        time=time%600;
    }
    if(time>=60){
        ans+=time/60;
        time=time%60;
    }
    if(time>=30){
        // 30초 버튼 즉 시작버튼을 눌러야한다면 이거 먼저 10분 또는 1분 추가 누르면 추후에 시작 버튼을 누르지 않아도 된다.
        useThirtyButton = true;
        ans = ans==0 ? 1 : ans + time/30;
        time=time%30;
    }
    ans+=time/10;
    if(!useThirtyButton)cout<<ans+1;
    else cout<<ans;
    return 0;
}