#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;cin>>N;
    vector<int> arr(N),ansIndex(N,-1);
    for(int i=0; i<N; i++)cin>>arr[i];
    vector<int> dp;
    vector<int> dpIndex;
    for(int i=0; i<N; i++){
        auto it = lower_bound(dp.begin(),dp.end(),arr[i]);
        int index = it-dp.begin();
        if(it==dp.end()) {
            if(!dpIndex.empty()) ansIndex[i] = dpIndex.back();
            dp.push_back(arr[i]);
            dpIndex.push_back(i);
        }
        else{
            *it = arr[i];
            dpIndex[index] = i;
            if(index > 0) ansIndex[i] = dpIndex[index-1];
        }
    }
    vector<int> ansLis;
    for(int i=dpIndex[dpIndex.size()-1]; i>=0; i=ansIndex[i]) ansLis.push_back(arr[i]);
    reverse(ansLis.begin(), ansLis.end());
    cout<<ansLis.size()<<"\n";
    for(int i=0; i<ansLis.size(); i++) cout<<ansLis[i]<<" ";
    return 0;
}