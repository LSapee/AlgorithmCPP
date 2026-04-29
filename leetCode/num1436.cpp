class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> mp;
        int n =paths.size();
        for(auto m : paths) mp[m[0]] = m[1];
        for(auto a : mp) if(mp.find(a.second)==mp.end())return a.second;
        return "";
    }
};