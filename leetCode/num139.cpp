class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_set<string>word_set(wordDict.begin(),wordDict.end());
        int n = s.size();
        vector<bool>dp(n+1,0);
        dp[0]=1;
        for(int i=0; i<n; i++){
            if(!dp[i])continue;
            for(int j=i+1; j<=n; j++){
                if(word_set.count(s.substr(i,j-i))) dp[j]=1;
            }
        }
        return dp[n];
    }
};


// unordered_set 자료구조 알아볼 것!!!!!
