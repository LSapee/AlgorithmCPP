class Solution {
public:
    vector<int> ranges(int a, int b){
        vector<int> temp;
        if(a+1==b)return temp;
        temp.push_back(a+1);
        temp.push_back(b-1);
        return temp;
    }

    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(nums.size()==0){
            temp.push_back(lower);
            temp.push_back(upper);
            ans.push_back(temp);
            return ans;
        }
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;

        if(nums[0]!=lower){
            temp.push_back(lower);
            temp.push_back(nums[0]-1);
            ans.push_back(temp);
        }

        for(int i=1; i<nums.size(); i++){
            vector<int> t = ranges(nums[i-1],nums[i]);
            if(t.size()==0) continue;
            ans.push_back(t);
        }
        temp.clear();
        if(nums[n]!=upper){
            temp.push_back(nums[n]+1);
            temp.push_back(upper);
            ans.push_back(temp);
        }
        return ans;
    }
};