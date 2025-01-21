#include <bits/stdc++.h>
using namespace std;

//20칸의 비트를 사용
int state;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    while(n--){
        string s; int k;
        cin>>s;
        if(s=="add"){
            cin>>k;
            // state의 1을 k-1칸만큼 왼쪽으로 이동 시켜 state와 or 연산자로 비교
            state |= (1<<(k-1));
        }else if(s=="check"){
            cin>>k;
            // state의 1을 (k-1)만큼 우측으로 이동시켰을때 1이 나오는지 비교
            cout<<((state >> (k-1))&1)<<"\n";
        }else if(s=="remove"){
            cin>>k;
            // k번째 비트를 0으로 반전 시켜서 기존의 비트와 and연산으로 1을 0으로 변경해주기
            state &= (~(1<<(k-1)));
        }else if(s=="toggle"){
            cin>>k;
            // k번째 비트를 XOR연산 처리
            state ^= (1<<(k-1));
        }else if(s=="empty"){
            // 비트를 전부 꺼버림
            state = 0;
        }else if(s=="all"){
            // 비트 20칸을 전부 킴
            state = 0xfffff;
        }
    }
}

//    for(int i=0; i<n; i++){
//        string s;cin>>s;
//        int x;
//        if(s.compare("add")==0){
//            cin>>x;
//            arr[x] =true;
//        }else if(s.compare("check")==0){
//            cin>>x;
//            if(arr[x]) cout<<1<<"\n";
//            else cout<<0<<"\n";
//        }else if(s.compare("remove")==0){
//            cin>>x;
//            arr[x]=false;
//        }else if(s.compare("toggle")==0){
//            cin>>x;
//            if(arr[x]){
//                arr[x]=false;
//            }else if(!arr[x]){
//                arr[x]=true;
//            }
//        }else if(s.compare("empty")==0){
//            for(int z=1; z<21; z++) arr[z]=false;
//        }else if(s.compare("all")==0){
//            for(int z=1; z<21; z++) arr[z]=true;
//        }
//    }
