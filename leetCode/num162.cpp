class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>nums[(n+i+1)%n]&&nums[i]>nums[(n-1)%n])return i;
        }
        return n-1;
    }
};

// O(log N) 찾아보기