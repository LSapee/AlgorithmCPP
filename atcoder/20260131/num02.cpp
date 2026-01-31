#include <bits/stdc++.h>
using namespace std;

int N,K;

void input(){
    cin>>N>>K;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    int ans =0;
    K-=N;
    while(K>0){
        ans++;
        N++;
        K-=N;
    }
    cout<<ans;
    return 0;

}