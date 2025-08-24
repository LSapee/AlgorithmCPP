class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            int k =nums[i];
            stack<int> stk;
            while(k>0){
                stk.push(k%10);
                k/=10;
            }
            while(!stk.empty()){
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        return ans;
    }
};