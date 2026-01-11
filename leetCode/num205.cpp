class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char> mp;
        unordered_map<char,char> mp2;
        int n =s.size();
        for(int i=0; i<n; i++){
            if(mp.find(s[i])==mp.end() && mp2.find(t[i])==mp2.end()){
                mp[s[i]] = t[i];
                mp2[t[i]]=s[i];
            }else{
                if(mp[s[i]]==t[i] && mp2[t[i]]==s[i])continue;
                return false;
            }
        }
        return true;
    }
};