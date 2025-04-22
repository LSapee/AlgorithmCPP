class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0; i<k; i++)sum+=nums[i];
        double avg = sum;
        for(int i=k; i<nums.size(); i++){
            sum+=nums[i];
            sum-=nums[i-k];
            if(avg<sum)avg = sum;
        }
        return avg/k;
    }
};