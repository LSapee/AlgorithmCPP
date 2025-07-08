class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s ="";
        string ss = "";
        for(int i=0; i<word1.size(); i++)s+=word1[i];
        for(int i=0; i<word2.size(); i++)ss+=word2[i];
        if(s.size()!=ss.size())return false;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=ss[i])return false;
        }
        return true;
    }
};