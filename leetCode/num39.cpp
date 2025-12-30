class Solution {
public:
    int n;
    vector<vector<int>> ans;
    void start(vector<int>& candidates, vector<int>temp,int target,int st,int sum){
        if(sum>=target){
            if(sum==target)ans.push_back(temp);
            return ;
        }
        for(int i=st; i<n; i++){
            if(sum+candidates[i]>target)return ;
            temp.push_back(candidates[i]);
            start(candidates,temp,target,i,sum+candidates[i]);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(),candidates.end());
        for(int i=0; i<n; i++){
            vector<int> temp;
            temp.push_back(candidates[i]);
            start(candidates,temp,target,i,candidates[i]);
        }
        return ans;
    }
};