#include <bits/stdc++.h>
#define XX first
#define Y second
using namespace std;

vector<pair<long long,long long>> PB;
vector<long long> allLayers;

// 빵 (L-1버거) 패티 (L-1버거) 빵
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    long long X;
    cin>>N>>X;
    long long ans = 0;
    PB.resize(N+1,{0,0});
    allLayers.resize(N+1,0);
    PB[0] = {1,0};
    allLayers[0] = 1;
    for(int i=1; i<=N; i++){
        PB[i].XX = PB[i-1].XX + PB[i-1].XX + 1;
        PB[i].Y = PB[i-1].Y + PB[i-1].Y + 2;
        allLayers[i] = PB[i].XX + PB[i].Y;
    }
    int st = N;
    while(X>0){
        if(allLayers[st] == X){
            ans+=PB[st].XX;
            break;
        }else if(allLayers[st]>X){
            st--;
            X--; // 추가했던 빵 빼기
        }else{
            ans+=PB[st].XX+1;
            X-=PB[st].XX+1;
            X-=PB[st].Y;
        }
    }
    cout<<ans;
    return 0;

}
