class Solution {
public:
    int arr[1000005];
    vector<int> otherVector(vector<int>& nums){
        int n = nums.size();
        vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(arr[nums[i]]==0)arr[nums[i]]++;
            else temp.push_back(nums[i]);
        }
        return temp;
    }

    int minIncrementForUnique(vector<int>& nums) {
        vector<int> temp = otherVector(nums);
        int n = temp.size();
        int ans =0;
        for(int i=0; i<n; i++){
            int x = temp[i];
            int t =1;
            while(1){
                if(arr[x+t]==0){
                    arr[x+t]++;
                    break;
                }
                t++;
            }
            ans+=t;
        }
        return ans;
    }
};
