class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        vector<int> s1A(26,0);
        vector<int> s1B(26,0);
        vector<int> s2A(26,0);
        vector<int> s2B(26,0);
        for(int i=0; i<n; i++){
            if(i%2==0){
                s1A[s1[i]-'a']++;
                s2A[s2[i]-'a']++;
            }else{
                s1B[s1[i]-'a']++;
                s2B[s2[i]-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            if(s1A[i] == s2A[i] && s1B[i] ==s2B[i])continue;
            else return false;
        }

        return true;
    }
};
