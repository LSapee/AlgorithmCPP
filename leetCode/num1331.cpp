class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector<int> arrC = arr;
        sort(arrC.begin(),arrC.end());
        int rank =1;
        for(int i=0; i<arrC.size(); i++){
            if(mp[arrC[i]]>0){continue;}
            mp[arrC[i]]=rank++;
        }
        vector<int> ans;
        for(int i=0; i<arr.size(); i++)ans.push_back(mp[arr[i]]);
        return ans;
    }
};