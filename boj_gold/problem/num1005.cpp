#include <bits/stdc++.h>
using namespace std;

int testBuild(vector<int>& arr,vector<vector<int>>& rules,int target){
    int n = arr.size();
    vector<int> buildTime(n,-1);
    stack<int> stk;
    for(int i=0; i<n; i++){
        if(buildTime[i]!=-1)continue;
        // 이전에 건설이 필요한 건물이 없을 경우
        if(rules[i].size()==0){
            buildTime[i] = arr[i];
        }else{
            stk.push(i);
        }
        while(!stk.empty()){
            //현재 건설 해야 하는 건물
            int cur = stk.top();
            // 사전에 건설해야할 것이 전부 건설 되었는가.
            bool ok = true;
            // 이 건물을 건설 전에 먼저 건설 되었어야 하는 건물들
            int time =arr[cur];
            if(rules[cur].size()==0) ok=true;
            for(auto x : rules[cur]){
                // -1이 있다는건 사전 건설이 필요한 건물이 있다는 것
                if(buildTime[x]==-1){
                    stk.push(x);
                    ok =false;
                    break;
                }else{
                    time = max(time,buildTime[x]+arr[cur]);
                }
            }
            if(ok){
                buildTime[cur] = time;
                stk.pop();
            }else continue;
        }
    }
    return buildTime[target-1];

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        int N,K;cin>>N>>K;
        vector<int> arr(N);
        for(int i=0; i<N; i++)cin>>arr[i];
        vector<vector<int>> rules(N,vector<int>(0)); // <이걸 멍청하게 K로 나서 bad_alloc에러 봄
        for(int i=0; i<K; i++){
            int a,b;cin>>a>>b;
            rules[b-1].push_back(a-1);
        }
        int target;cin>>target;
        cout<<testBuild(arr,rules,target)<<"\n";
    }
    return 0;
}