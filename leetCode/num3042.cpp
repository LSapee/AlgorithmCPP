class Solution {
public:
    bool isGood(string s, string ss){
        if(s.size()>ss.size())return false;
        bool ok =true;
        int n = s.size();
        int m = ss.size();
        for(int i=0; i<n; i++){
            if(s[i]!=ss[i])return false;
            if(ss[m-1-i]!=s[n-1-i])return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt =0;
        for(int i=0; i<words.size()-1; i++){
            for(int j =i+1; j<words.size(); j++){
                if(isGood(words[i],words[j]))cnt++;
            }
        }
        return cnt;
    }
};