class Solution {
public:
    int numKLenSubstrNoRepeats(string s, int k) {
        unordered_set<char> st;
        int ans =0;
        int startIndex =0;
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i])==st.end())st.insert(s[i]);
            else {
                while(!st.empty()){
                    char cur = s[startIndex++];
                    st.erase(cur);
                    if(cur==s[i])break;
                }
                st.insert(s[i]);
            }
            if(st.size()==k){
                ans++;
                st.erase(s[startIndex++]);
            }
        }
        return ans;
    }
};