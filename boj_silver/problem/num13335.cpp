#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // n ㅊㅏ량 n대
    // 다리의 길이 w
    // 다리가 버틸수 있는 무게 L
    int n,w,L;cin>>n>>w>>L;
    int ans = 0;
    int W = 0;
    queue<int> Q;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        while(1){
            if(Q.size()==w){
                W-=Q.front();
                Q.pop();
            }
            if(W+k<=L)break;
            //0으로 더미 채우기
            Q.push(0);
            ans++;
        }
        Q.push(k);
        W+=k;
        ans++;
    }
    cout<<ans+w;
}