#include <bits/stdc++.h>
using namespace std;

int T;
int n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i=0; i<m; i++){int a,b;cin>>a>>b;}
        cout<<n-1<<"\n";
    }
}
/*
 * n개의 나라를 가려면 비행기는 n-1번 타야함...
 * 문제 오류인가...
 * */
