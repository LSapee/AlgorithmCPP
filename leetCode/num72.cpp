class Solution {
public:
    vector<vector<int>> memo;
    int minDistance(string word1, string word2) {

        int word1Length = word1.size();
        int word2Length = word2.size();
        if(word1Length == 0 ) return word2Length;
        if(word2Length == 0 ) return word1Length;
        vector<vector<int>> dp(word1.length()+1,vector<int>(word2.length()+1,0));
        //2차원 배열 
        for(int i=1; i<=word1Length; i++){
            dp[i][0] = i;
        }
        for(int i=1; i<=word2Length; i++){
            dp[0][i] =i;
        }
        for(int i=1; i<=word1Length; i++){
            for(int j=1; j<=word2Length; j++){
                if(word2[j-1]==word1[i-1])dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
            }
        }
        return dp[word1Length][word2Length];

        //2차원 배열 초기화. 재귀
        // memo.resize(word1.size()+1, vector<int>(word2.length() +1,-1));
        // return minDistanceRecur(word1,word2,word1.size(),word2.size());
    }

    // int minDistanceRecur(string word1,string word2,int word1Index, int word2Index){
    //     // word1이 0글자면 word2의 글자수 만큼 반환
    //     if(word1Index==0) return word2Index;
    //     // word2가 0이면 word1만큼 반환
    //     if(word2Index==0) return word1Index;

    //     if(memo[word1Index][word2Index] != -1) 
    //         return memo[word1Index][word2Index];

    //     int minEditDistance =0;

    //     if(word1[word1Index-1] == word2[word2Index-1]) 
    //         minEditDistance = minDistanceRecur(word1, word2, word1Index-1, word2Index-1);
    //     else{
    //         int insertOperation = minDistanceRecur(word1, word2, word1Index, word2Index-1);
    //         int deleteOperation = minDistanceRecur(word1, word2, word1Index-1, word2Index);
    //         int replaceOperation = minDistanceRecur(word1, word2, word1Index-1, word2Index-1);
    //         minEditDistance = min(insertOperation,min(deleteOperation,replaceOperation))+1;
    //     }
    //     memo[word1Index][word2Index];
    //     return minEditDistance;
    // }
};