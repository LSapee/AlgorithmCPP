class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        int cnt =0;
        int n = text.size();
        string temp = "";
        vector<string> words;
        for(int i=0; i<n; i++){
            if(text[i] == ' '){
                words.push_back(temp);
                temp ="";
            }else{
                temp+=text[i];
            }
        }
        if(temp.size() != 0) words.push_back(temp);
        int m = words.size();
        for(int i=1; i<m-1; i++){
            if(words[i-1] == first && words[i]==second)ans.push_back(words[i+1]);
        }

        return ans;
    }
};