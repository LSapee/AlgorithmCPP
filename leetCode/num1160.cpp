class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> ap(26,0);
        for(char a: chars)ap[a-'a']++;
        int n= words.size();
        int ans =0;
        for(int i=0; i<n; i++){
            vector<int> temp(26,0);
            bool ok = 1;
            for(char a: words[i])temp[a-'a']++;
            for(int i=0; i<26; i++){
                if(temp[i] > ap[i]){
                    ok= false;
                    break;
                }
            }
            if(ok)ans+=words[i].size();
        }
        return ans;
    }
};