class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans ="";
        for(string word : words){
            ans+=word;
            if(ans==s)return true;
            if(ans.size()>=s.size())return false;
        }
        return false;
    }
};