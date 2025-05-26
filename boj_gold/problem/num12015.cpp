#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin>>N;
    vector<int> arr(N);
    vector<int> ans;
    for(int i=0; i<N; i++) cin>>arr[i];
    vector<int> dp;
    for (int i =0; i<N; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), arr[i]);
        if (it == dp.end()) {
            dp.push_back(arr[i]);
        }else {
            if(dp.size()>ans.size())ans = dp;
            // 이부분이 중요;
            *it = arr[i];
        }
    }
    if(dp.size()>ans.size())ans =dp;
    cout<<dp.size()<<" ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

