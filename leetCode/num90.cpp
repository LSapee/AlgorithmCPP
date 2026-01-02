class Solution {
public:
    int n;
    unordered_set<string> st;
    vector<vector<int>> ans;
    void stringAdd(vector<int>& nums,vector<int> temp,string s,int start){
        if(start == n)return ;
        for(int i= start; i<n; i++){
            temp.push_back(nums[i]);
            if(st.find(s+to_string(nums[i]))==st.end()){
                st.insert(s+to_string(nums[i]));
                ans.push_back(temp);
            }
            stringAdd(nums,temp,s+to_string(nums[i]),i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp;
        ans.push_back(temp);
        for(int i=0; i<n; i++){
            stringAdd(nums,temp,"",i);
        }
        return ans;
    }
};