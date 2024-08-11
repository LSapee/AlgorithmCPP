class Solution {
public:
    map<char,int> mp;
    bool check(){
        for(auto a : mp) if(a.second>1) return true;
        return false;
    }

    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans =0;
        if(n==0)return 0;
        int st =0;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
            bool ok = check();
            while(ok){
                mp[s[st]]--;
                st++;
                ok = check();
            }
            ans = max(ans,i-st+1);
        }
        return ans;
    }
};