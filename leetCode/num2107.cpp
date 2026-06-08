class Solution {
public:
    int shareCandies(vector<int>& candies, int k) {
        vector<int> candiesLabel(100001,0);
        int n = candies.size();
        int ans =0;
        int allCandies = 0;
        int cnt =0;
        queue<int> Q;
        for(int i=0; i<n; i++){
            int cur = candies[i];
            if(candiesLabel[cur] ==0 ){
                allCandies++;
                candiesLabel[cur]++;
            }else candiesLabel[cur]++;
        }
        if(k==0)return allCandies;
        for(int i=0; i<n; i++){
            int cur = candies[i];
            if(Q.size()<k){
                Q.push(cur);
                candiesLabel[cur]--;
                if(candiesLabel[cur]==0)cnt++;
            }else{
                ans = max(ans,allCandies-cnt);
                int del = Q.front(); Q.pop();
                if(candiesLabel[del]==0)cnt--;
                candiesLabel[del]++;
                Q.push(cur);
                candiesLabel[cur]--;
                if(candiesLabel[cur]==0)cnt++;
            }
        }
        ans = max(ans,allCandies-cnt);
        return ans;
    }
};