class Solution {
public:
// N^2 말고 방법이.
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=0; i<n; i++){
            unordered_map<int,int> oddmp;
            unordered_map<int,int> evenmp;
            if(nums[i]%2==0){
                oddmp[nums[i]]++;
            }else{
                evenmp[nums[i]]++;
            }
            for(int j=i+1; j<n; j++){
                if(nums[j]%2==0){
                    oddmp[nums[j]]++;
                }else{
                    evenmp[nums[j]]++;
                }
                if(oddmp.size()==evenmp.size())ans = max(ans,j+1-i);
            }
        }
        return ans;
    }
};