class Solution {
public:
    map<int,int> mp;
    void megre(vector<vector<int>> &item){
        int n = item.size();
        for(int i=0; i<n; i++)mp[item[i][0]] +=item[i][1];
    }

    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        megre(items1);
        megre(items2);
        vector<vector<int>> ans;
        for(auto a: mp)ans.push_back({a.first,a.second});
        sort(ans.begin(),ans.end());
        return ans;
    }
};