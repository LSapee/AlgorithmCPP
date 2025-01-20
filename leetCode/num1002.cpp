class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        vector<vector<int>> arr(n,vector<int>(26,0));
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                arr[i][words[i][j]-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            int k = 1000;
            for(int j=0; j<n; j++){
                k = min(arr[j][i],k);
            }
            if(k==0)continue;
            for(int j=0; j<k; j++){
                string s ="";
                s+=i+'a';
                ans.push_back(s);
            }
        }
        return ans;
    }
};