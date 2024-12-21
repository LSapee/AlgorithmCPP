class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mp;
        int n = score.size();
        for(int i =0; i<n; i++)mp[score[i]] =i;
        sort(score.rbegin(),score.rend());
        vector<string> ans(n,"");
        for(int i=0; i<n; i++){
            int target = mp[score[i]];
            if(i==0){
                ans[target] = "Gold Medal";
            }else if(i==1){
                ans[target] = "Silver Medal";
            }else if(i==2){
                ans[target] = "Bronze Medal";
            }else{
                ans[target] = to_string(i+1);
            }
        }
        return ans;
    }
};