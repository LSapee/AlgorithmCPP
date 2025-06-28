class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> temp;
        int arr[200005];
        fill(arr,arr+200005,0);
        int n =nums.size();
        for(int i=0; i<n; i++)temp.push_back(nums[i]);
        vector<int> ans;
        sort(temp.begin(),temp.end());
        int st = n-k;
        for(int i=st; i<n; i++)arr[temp[i]+100000]++;
        for(int i=0; i<n; i++){
            if(arr[nums[i]+100000]>0){
                ans.push_back(nums[i]);
                arr[nums[i]+100000]--;
            }
        }
        return ans;
    }
};