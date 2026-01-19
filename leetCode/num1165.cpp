class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char,int> mp;
        for(int i=0; i<26; i++)mp[keyboard[i]]= i;
        int m = word.size();
        int ans =0;
        int cur =0;
        for(int i=0; i<m; i++){
            ans += abs(cur - mp[word[i]]);
            cur = mp[word[i]];
        }
        return ans;
    }
};