class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int K = -1;
        int n = items.size();
        int ans =0;
        if(ruleKey == "type") K=0;
        else if(ruleKey == "color") K=1;
        else K=2;
        for(int i =0; i<n; i++){
            if(items[i][K] == ruleValue)ans++;
        }
        return ans;
    }
};