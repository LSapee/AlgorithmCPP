class Solution {
public:
    int wordToInt(string s){
        string ans = "";
        int n = s.size();
        for(int i=0; i<n; i++)ans+=to_string(s[i]-'a');
        return stoi(ans);
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f = wordToInt(firstWord);
        int s = wordToInt(secondWord);
        int target = wordToInt(targetWord);
        return f+s == target;
    }
};