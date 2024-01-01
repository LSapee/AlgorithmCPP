#include <bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        // 0 : +60 | 1 : +10 | 2 : -10 | 3 : +1 | 4 : -1
        int ans[5] = {0,0,0,0,0};
        int time;cin>>time;
        //60초 이상일 경우 젤 빠른 경우는 60초를 + 해주는 경우뿐
        int k =0;
        if(time>=60){
            k = time/60;
            time -= k*60;
            ans[0] += k;
        }
        bool ok =false;
        if(time<=35){
            k = time /10;
            time -= k*10;
            ans[1] += k;
        }else{
            ans[0]++;
            time =60-time;
            k= time/10;
            time -= k*10;
            ans[2]+=k;
            ok = true;
        }
        if(ok){
            if(time<=5){
                ans[4]+=time;
            }else{
                ans[2]++;
                time = 10-time;
                ans[3]+=time;
            }
        }else{
            if(time<=5){
                ans[3]+=time;
            }else{
                ans[1]++;
                time = 10-time;
                ans[4]+=time;
            }
        }

        for(int i=0; i<5; i++)cout<<ans[i]<<" ";
        cout<<"\n";
    }

}