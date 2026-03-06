#include <bits/stdc++.h>
using namespace std;

// 스위치 상태 확인용 배열
vector<int> switches;
int N,M; // N = 스위치 개수, M = 학생들에게 스위치 주는 횟수

/*
 1 남자의 경우 받은 스위치 번호의 배수만 상태를 변경.
 2 여자의 경우 받은 수와 같은 번호가 붙은 스위치를 중심으로 좌우가 대칭이면서 가장 많은 스위치를 포함하는 구간을 찾아서, 그 구간에 속한 스위치의 상태를 모두 바꾼다.
  ㄴ 1. 받은 스위치 기준으로 양쪽이 대칭일 경우 해당 범위의 스위치 모두 반전
  ㄴ 2. 받은 스위치 기준으로 양쪽이 대칭이 아닐 경우 해당 스위치만 반전
 */
void input(){
    cin>>N;
    switches.assign(N+1,0);
    for(int i=1; i<=N; i++)cin>>switches[i];
    cin>>M;
}

bool check(int num ,int &a,int &b){
    while(a>0 && b<=N){
        if(switches[a] != switches[b]){
            if(a==num-1) return false;
            return true;
        }
        a--;
        b++;
    }
    return true;
}
void output(){
    for(int i=1; i<=N; i++){
        cout<<switches[i]<<" ";
        if(i%20==0)cout<<"\n";
    }
}

void solve(){
    while(M--){
        int sex,num;
        cin>>sex>>num;
        if(sex ==1){
            //남자
            int st =1;
            while(num*st<=N){
                switches[num*st] = switches[num*st] == 0 ? 1: 0;
                st++;
            }
        }else{
            //여자
            int st =num-1,ed = num+1;
            bool mi = check(num,st,ed);
            if(mi){
                // 대칭인경우.
                for(int i=st+1; i<=ed-1; i++) switches[i] = switches[i] ==0 ? 1: 0;
            }else{
                // 비대칭인 경우
                switches[num] = switches[num] ==0 ? 1: 0;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    solve();
    output();
    return 0;
}

//1 1 0 1 1 0 1 0 1 1 0 1 0 0 1 0 1 1 0 0 1 0 0 0 0 0 1 0 1 1 1 1 0 0 1 0 1 0 1 0 1 0 1 1 1 0 1 0 0 1 0 1
//1 0 1 0 0 1 1 1 0 0 1 0 0 0 1 0 1 1 0 0 1 0 0 0 0 0 1 0 1 1 1 1 0 1 1 1 1 0 1 0 1 0 1 1 0 0 0 0 0 1 0 1
