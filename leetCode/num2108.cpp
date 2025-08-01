class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n =words.size();
        for(int i=0; i<n; i++){
            string s = words[i];
            int k = s.size();
            int st= 0;
            int ed = k-1;
            bool check = false;
            while(st<=ed){
                if(s[st]!=s[ed]){
                    check = true;
                    break;
                }
                st++;
                ed--;
            }
            if(!check)return s;
        }
        return "";
    }
};