class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        queue<int> Q;
        for(int i=0; i<nums2.size(); i++)Q.push(nums2[i]);
        vector<int> ans;
        int k = Q.front();Q.pop();
        for(int i=0; i<nums1.size(); i++){
            while(!Q.empty() && k<nums1[i]){
                if(!Q.empty()){
                    k=Q.front();Q.pop();
                }
            }
            if(nums1[i]==k){
                ans.push_back(k);
                if(!Q.empty()){
                    k= Q.front();Q.pop();
                }else{
                    k=-1;
                }
            }
        }
        return ans;
    }
};