class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans =1;
        int n = sentences.size();
        for(int i=0; i<n; i++){
            string s =sentences[i];
            int cnt =1;
            for(char a : s){
                if(a==' ')cnt++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};