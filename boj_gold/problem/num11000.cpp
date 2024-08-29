#include <bits/stdc++.h>
using namespace std;

int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Times;
    cin>>N;
    vector<pair<int,int>> arr;
    for(int i=0; i<N; i++){
        int startTime,endTime;cin>>startTime>>endTime;
        arr.push_back({startTime,endTime});
    }
    sort(arr.begin(),arr.end());
    int ans = 0;
    for(int i=0; i<N; i++){
        while(!Times.empty() && Times.top().first <= arr[i].first) {
            Times.pop();
        }
        // 사용할 교실 추가
        Times.push({arr[i].second, arr[i].first});
        ans = max(ans, (int)Times.size());
    }
    cout<<ans;
}
