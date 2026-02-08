#include <bits/stdc++.h>
using namespace std;

int N,K;
void input(){
    cin>>N>>K;
}
bool check(int a){
    int target = 0;
    while(a>0){
        target+=a%10;
        a/=10;
        if(target>K)return false;
    }
    if(target==K){
        return true;
    }

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    int ans =0;
    for(int i =1; i<=N; i++) if(check(i))ans++;
    cout<<ans;
    return 0;
}