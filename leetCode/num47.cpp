class Solution {
public:
    vector<vector<int>> ans;
    bool vis[9];
    bool checkAns(vector<int> temp){
        for(int i=0; i<ans.size(); i++){
            int k =0;
            for(int j=0; j<temp.size(); j++){
                if(temp[j]==ans[i][j])k++;
            }
            if(k==temp.size()) return false;
        }
        return true;
    }

    void back(vector<int>& nums,vector<int> temp,int k){
        if(k==nums.size()){
            if(checkAns(temp)) ans.push_back(temp);
            return ;
        }
        for(int i=0; i<nums.size(); i++){
            if(vis[i])continue;
            vis[i]=true;
            temp.push_back(nums[i]);
            back(nums,temp,k+1);
            vis[i]=false;
            temp.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        back(nums,temp,0);
        return ans;
    }
};