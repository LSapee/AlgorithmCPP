// N
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        int mx = *max_element(candies.begin(),candies.end());
        for(int i=0; i<n; i++){
            int target = candies[i]+extraCandies;
            if(target>=mx) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};
/* N^2
 * class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        for(int i=0; i<n; i++){
            int target = candies[i]+extraCandies;
            bool isB = false;
            for(int j =0; j<n; j++){
                if(i==j)continue;
                if(target>=candies[j])continue;
                isB = true;
                break;
            }
            if(isB)ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};
 */