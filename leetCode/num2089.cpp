class Solution {
public:
    // 카운팅 처리로 시간복잡도 N으로 줄임.
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n =nums.size();
        vector<int> ans;
        int targetCnt =0;
        int targetUnderCnt =0;
        for(int i=0; i<n; i++){
            if(nums[i]<target)targetUnderCnt++;
            if(nums[i]==target)targetCnt++;
        }
        for(int i=0; i<targetCnt; i++)ans.push_back(targetUnderCnt+i);
        return ans;
    }
};



// 변경점 target 이후 break 처리 여전히 N log N
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i]==target)ans.push_back(i);
            if(nums[i]>target) break;
        }
        return ans;
    }
};

//
// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         for(int i=0; i<nums.size(); i++) if(nums[i]==target) ans.push_back(i);
//         return ans;
//     }
// };