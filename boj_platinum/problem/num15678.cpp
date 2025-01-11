#include <bits/stdc++.h>
using namespace std;

int D,N;
long long allSum= 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>D;
    long long maxNum = INT_MIN;
    vector<long long> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
        maxNum = max(maxNum,arr[i]);
        if(arr[i]>0)allSum+=arr[i];
    }
    if(maxNum<=0){
        cout<<maxNum;
        return 0;
    }
    long long maxSum =LLONG_MIN; // 왜? 최소값?
    deque<int> dq;
    vector<long long> dp(N,LLONG_MIN); // 왜 최소값으로 초기화?
    for (int i = 0; i < N; i++) {
        // 덱의 맨 앞 원소가 현재 창 범위를 벗어나면 제거 i-D인지 확인
        if (!dq.empty() && dq.front() < i - D) {
            dq.pop_front();
        }
        // dp[i] 계산
        if(dp.size()==i)dp.push_back(arr[i]);
        //dq가 비어있지 않다면,
        if (!dq.empty()) {
            //dp[i] = 현재 dp[i] + dp[덱의 맨앞] + 기존에 현재 숫자
            dp[i] = max(dp[i], dp[dq.front()] + arr[i]);
        }

        maxSum = max(maxSum, dp[i]);

        // 덱에서 현재 dp[i]보다 작은 값을 모두 제거
        while (!dq.empty() && dp[dq.back()] <= dp[i]) {
            dq.pop_back();
        }

        // 현재 인덱스를 덱에 추가
        dq.push_back(i);
    }
//    for(int i=1; i<D; i++){
//        if(dp[i-1]+arr[i]>arr[i])dp[i]=dp[i-1]+arr[i];
//        else dp[i]= arr[i];
//        maxSum =max(maxSum,dp[i]);
//        if(maxSum==allSum){
//            cout<<allSum;
//            return 0;
//        }
//    }
//    for(int i=D; i<N; i++){
//        for(int j=i-D; j<i; j++){
//            if(arr[i]+dp[j]>arr[i])dp[i]= max(dp[i],dp[j]+arr[i]);
//            else dp[i] = max(dp[i],arr[i]);
//        }
//        maxSum = max(dp[i],maxSum);
//        if(maxSum==allSum){
//            cout<<allSum;
//            return 0;
//        }
//        if(arr[i]>0)allSum-=arr[i];
//    }
    cout<<maxSum;
    return 0;
}

