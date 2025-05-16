#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> arr;
// 최대값이 1000*1000이라 N <=1,000 arr[i][j]의 값<=1000 INT_MAX쓰면 오버플로우 발생해서 -로 가기때문에 INT_MAX는 사용하지 않는다.
const int MAX = 1000000;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    int ans =MAX;
    arr.resize(N,vector<int>(3,0));
    vector<vector<int>> dp(N,vector<int>(3,0));
    for(int i=0; i<N; i++) cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    // i번 집부터 시작
    for(int i=0; i<3; i++){
        dp[0][0] = MAX;
        dp[0][1] = MAX;
        dp[0][2] = MAX;
        dp[0][i] = arr[0][i];
        for(int j=1 ;j<N; j++){
            dp[j][0] = min(dp[j-1][1],dp[j-1][2])+arr[j][0];
            dp[j][1] = min(dp[j-1][0],dp[j-1][2])+arr[j][1];
            dp[j][2] = min(dp[j-1][0],dp[j-1][1])+arr[j][2];
        }
        for(int j=0; j<3; j++){
            if(i==j)continue; // 첫번째에 칠한 집은 패스
            ans = min(ans,dp[N-1][j]);
        }
    }
    cout<<ans;
    return 0;
}