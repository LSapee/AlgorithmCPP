#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int target; cin>>target;
    int dp[100001];
    // 배열 초기화 1^n + 1^n...으로 target까지
    for(int i=0; i<=target; i++)dp[i] = i;
    // 4부터 제곱으로 2^ +로 표현이 가능해짐
    for(int i=4; i<=target; i++) {
        for(int j=2; j*j<=i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout<<dp[target];
}