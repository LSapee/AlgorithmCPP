#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N,M;
ll arr[100001];

int shuffleX(int joker,ll x){
    return (joker+x)%N == 0 ? N : (joker+x)%N;
}
int shuffleY(int joker,ll y){
    y = y%N;
    joker = N-y+joker;
    return joker%N==0?N : joker%N;
}
int chainge(int z){
    return arr[z];
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>N>>M;
    arr[0] = 1;
    int joker = 1;
    for(int i=0,st =1; i<M; i++,st++){
        int xyz; ll cnt; cin>>xyz>>cnt;
        if(xyz==1)joker = shuffleX(joker,cnt);
        if(xyz==2)joker = shuffleY(joker,cnt);
        if(xyz==3)joker = chainge(cnt);
        arr[st] = joker;
    }
    cout<<joker;

    return 0;
}