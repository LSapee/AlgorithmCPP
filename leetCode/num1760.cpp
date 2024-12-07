class Solution {
public:
    bool check(int mid, vector<int>& nums, int k){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>mid){
                if(k==0)return false;
                int maxi = ((nums[i]+mid-1)/mid)-1;
                if(maxi>k)return false;
                k-= maxi;
            }
        }
        return true;
    }

    int minimumSize(vector<int>& nums, int maxOperations) {
        int st =1, ed =*max_element(nums.begin(),nums.end());
        cout<<ed;
        int ans = ed;
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(check(mid,nums,maxOperations)){
                ans = mid;
                ed = mid-1;
            }else st = mid+1;
        }
        return ans;
    }
};