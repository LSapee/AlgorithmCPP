class Solution {
public:
    // 문제에서 요구하는 것은 아마도
    // 배열 2개로 나눠서 2분 탐색하는 것은 생각한거 같은데...
    // 최대 5000개 안에서 찾는거라 그냥 for로 처리
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<nums.size(); i++)if(nums[i]==target)return true;
        return false;
    }
};