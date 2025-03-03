class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int> Q;
        queue<int> Q2;
        int cnt =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==pivot){
                cnt++;
                continue;
            }else if(nums[i]<pivot){
                Q.push(nums[i]);
            }else{
                Q2.push(nums[i]);
            }
        }
        vector<int> ans;
        while(!Q.empty()){
            ans.push_back(Q.front());Q.pop();
        }
        while(cnt--)ans.push_back(pivot);
        while(!Q2.empty()){
            ans.push_back(Q2.front());Q2.pop();
        }
        return ans;
    }
};