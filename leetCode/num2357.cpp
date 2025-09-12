class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt =0;
        int n =nums.size();
        vector<int> arr;
        for(int i=0; i<n; i++) if(nums[i]!=0) arr.push_back(nums[i]);
        sort(arr.begin(),arr.end());
        n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==0)continue;
            cnt++;
            for(int j=i+1; j<n; j++)arr[j] = arr[j]-arr[i] >0 ? arr[j]-arr[i] :0;
        }
        return cnt;
    }
};