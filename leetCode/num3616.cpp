class Solution {
public:
    int totalReplacements(vector<int>& ranks) {
        int ans =0;
        int n = ranks.size();
        int cur = ranks[0];
        for(int i=1; i<n; i++){
            if(cur>ranks[i]){
                cur = ranks[i];
                ans++;
            }
        }
        return ans;
    }
};