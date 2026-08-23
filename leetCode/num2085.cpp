class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        for(string a : words1)mp1[a]++;
        for(string a: words2)mp2[a]++;
        int ans =0;
        for(auto a: mp1)if(a.second == 1 && mp2[a.first] == 1)ans++;
        return ans;
    }
};