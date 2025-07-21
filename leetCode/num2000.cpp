class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int n = word.size();
        for(int i=0; i<n; i++){
            if(word[i]==ch){
                string f = word.substr(0,i);
                string d = word.substr(i+1,n);
                reverse(f.begin(),f.end());
                ans = ch + f + d;
                break;
            }
        }
        return ans.size() == 0  ? word : ans;
    }
};