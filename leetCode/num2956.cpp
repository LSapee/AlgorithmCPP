class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ={0,0};
        vector<int> vis;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vis.assign(101,-1);
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0; i<n; i++){
            if(vis[nums1[i]]==-2)continue;
            if(vis[nums1[i]]==1){
                ans[0]++;
                continue;
            }
            bool findNum = false;
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    findNum= true;
                    ans[1]++;
                }
                if(nums2[j]>nums1[i])break;
            }
            if(findNum){
                vis[nums1[i]]=1;
                ans[0]++;
            }else{
                vis[nums1[i]] =-2;
            }
        }
        return ans;
    }
};