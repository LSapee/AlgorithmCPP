#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        // K 를 넘기면 방범 장치 울림. K는 최대 10억 각 집에는 최대 1만 max값은 1만 *10만으로 10억 int 범위 안에 있음
        int N,M,K;cin>>N>>M>>K;
        vector<int> arr(N);
        for(int i=0; i<N; i++) cin>>arr[i];
        deque<int> DQ;
        int ans =0;
        int sum = 0;
        int ed = N+M-1;
        for(int i=0; i<ed; i++){
            DQ.push_back(arr[i%N]);
            sum+=arr[i%N];
            if(DQ.size()==M){
                if(sum<K)ans++;
                sum-=DQ.front();
                DQ.pop_front();
                // 모든집을 털경우 처음에 만족 했으면 바로 반환
                if(N==M)break;
            }
        }
        cout<<ans<<"\n";
    }
}