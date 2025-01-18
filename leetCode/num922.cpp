class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        queue<int> A;
        queue<int> B;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0)A.push(nums[i]);
            else B.push(nums[i]);
        }
        while(1){
            ans.push_back(A.front());
            ans.push_back(B.front());
            A.pop();
            B.pop();
            if(A.empty()&&B.empty())break;
        }
        return ans;
    }
};