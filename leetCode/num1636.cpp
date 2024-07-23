class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        //빈도에 따라 정렬 -100 ~ 100
        map<int,int> mp;
        vector<vector<int>> arr(101,vector<int>(0));
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)mp[nums[i]]++;
        for(auto a:mp)arr[a.second].push_back(a.first);
        for(int i=1; i<101; i++)sort(arr[i].rbegin(),arr[i].rend());
        for(int i=1; i<101; i++){
            if(arr[i].size()==0)continue;
            for(int j=0; j<arr[i].size(); j++){
                for(int k=0; k<i; k++)ans.push_back(arr[i][j]);
            }
        }

        return ans;

    }
};