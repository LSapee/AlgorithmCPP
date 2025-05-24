#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,K;cin>>N>>K;
    deque<int> DQ;
    int ans =0;
    int er =K;
    for(int i=0; i<N; i++){
        int cur; cin>>cur;
        bool ok =false;
        if(cur%2!=0)ok =true;
        if(ok){
            if(er-1<0){
                ans =max(ans,(int)DQ.size()-K);
                while(!DQ.empty()){
                    int x =DQ.front();DQ.pop_front();
                    if(x%2!=0){
                        er++;
                        break;
                    }
                }
            }
            DQ.push_back(cur);
            er--;
        }
        else DQ.push_back(cur);
    }
    ans = max(ans,(int)DQ.size()-(K-er));
    while(!DQ.empty()){
        int x =DQ.front();DQ.pop_front();
        if(x%2!=0){
            K++;
        }
    }
    cout<<ans;
    return 0;
}