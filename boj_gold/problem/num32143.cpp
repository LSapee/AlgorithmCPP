#include <bits/stdc++.h>
using namespace std;

int H,N,Q,ans;
priority_queue<int,vector<int>,greater<int>> Mpq;
// 공격 해보기 + hp를 0으로 만들 수 있는지
int attack(priority_queue<int> &pq){
    int cnt = 0;
    while(!pq.empty()&&H>0){
        int cur = pq.top(); pq.pop();
        H-=cur;
        cnt++;
        Mpq.push(cur);
    }
    if(H>0)return -1;
    return cnt;
}

// 기존의 공격을 재구성
int newAttack(){
    while(!Mpq.empty()){
        // 가장 약했던 카드 추출
        int t = Mpq.top();
        // 가장 약했던 공격만큼 HP를 치료해도 0 이하인지 확인
        if(H+t<=0){
            //0이하인 경우 해당 공격 횟수 제외하면서 HP추가하기
            Mpq.pop();
            H+=t;
        }else{
            return Mpq.size();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>H>>N>>Q;
    priority_queue<int> pq;
    for(int i=0; i<N; i++){
        int k;cin>>k;
        pq.push(k);
    }
    ans = attack(pq);
    cout<<ans<<"\n";
    for(int i=0; i<Q;i++){
        int k;cin>>k;
        // HP를 0으로 만들수 없는 상황에서 추가 카드가 들어 왔을경우
        if(ans==-1){
            H-=k;
            Mpq.push(k);
            // HP를 0으로 만들 수 있을 경우만 ans값을 수정할 필요 있음
            if(H<=0)ans = newAttack();
        }else{
            //새로운 카드가 기존카드의 최소보다 클경우에 만 카드 추가
           if(k>Mpq.top()){
               // 새로 들어온 카드를 최소힙에 추가
               Mpq.push(k);
               // HP를 새로들어온 수만큼 -해주기
               H-=k;
               // 공격하는 카드의 갯수 추가
               ans++;
               // 공격 카드를 재구성
               ans = newAttack();
           }
        }
        cout<<ans<<"\n";
    }
    return 0;
}