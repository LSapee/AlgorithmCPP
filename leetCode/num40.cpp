class Solution {
public:
    vector<vector<int>> ans;
    int n;
    //중복 제거
    void isUnique(vector<int>& temp){
        for(int i=0; i<ans.size(); i++){
            if(ans[i].size()!=temp.size())continue;
            int cnt = 0;
            for(int j=0; j<ans[i].size(); j++) if(ans[i][j]==temp[j])cnt++;
            if(cnt==ans[i].size()) return ;
        }
        ans.push_back(temp);
    }

    void back(vector<int>& candidates,vector<int> temp,int index,int k,int target){
        if(k>=target){
            if(k==target) isUnique(temp);
            return ;
        }
        for(int i=index; i<n; i++){
            if(i==index||candidates[i]!=candidates[i-1]){
                temp.push_back(candidates[i]);
                back(candidates,temp,i+1,k+candidates[i],target);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        n= candidates.size();
        sort(candidates.begin(),candidates.end());
        int sum =0;
        for(int i=0; i<n; i++)sum+=candidates[i];
        if(sum<target) return ans;
        back(candidates,temp,0,0,target);
        return ans;
    }
};