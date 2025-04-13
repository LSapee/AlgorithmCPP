class Solution {
public:
    bool sameWord(string s, string ss){
        if(s.size()!=ss.size())return false;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=ss[i])return false;
        }
        return true;
    }
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int a=-1,b=-1;
        int ans =INT_MAX;
        for(int i=0; i<wordsDict.size(); i++){
            if(sameWord(wordsDict[i],word1)) a=i;
            if(sameWord(wordsDict[i],word2)) b=i;
            if(a!=-1&&b!=-1){
                ans = min(abs(b-a),ans);
            }
        }
        return ans;
    }
};