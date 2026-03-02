class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans ="";
        int n = words.size();
        for(int i=0; i<n; i++){
            int m = words[i].size();
            int k =0;
            for(int j=0; j<m; j++){
                k+= weights[words[i][j]-'a'];
            }
            ans+='z'-(k%26);
        }
        return ans;
    }
};