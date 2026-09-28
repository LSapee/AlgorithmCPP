class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int ans = 0;
        deque<char> DQ;
        unordered_map<char,int> mp; 
        for(char &a : s){
            DQ.push_back(a);
            mp[a]++;
            while(mp.size()>2 && !DQ.empty()){
                auto cur =DQ.front(); DQ.pop_front();
                mp[cur]--;
                if(mp[cur]==0)mp.erase(cur);
            }
            ans= max((int)DQ.size(),ans);
        }
        return ans;
    }
};