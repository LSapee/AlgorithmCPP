#include <bits/stdc++.h>
using namespace std;

int N;
/*
 * N명이 원
 */
queue<int> Q;
void input(){
    cin>>N;
    for(int i=1; i<=N; i++)Q.push(i);
}
void output(){
    cout<<Q.front();
}

void solve(){
    long long st =1;
    while(Q.size() != 1){
        long long target = st*st*st;
        int p = target > Q.size() ? target%(int)Q.size() : (int)target;
        int cnt =0;
        while(cnt<p){
            cnt++;
            if(cnt==p){
                Q.pop();
                break;
            }
            Q.push(Q.front());Q.pop();
        }
        if(p==0){
            while(cnt<Q.size()-1){
                Q.push(Q.front());Q.pop();
                cnt++;
            }
            Q.pop();
        }
        st++;
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