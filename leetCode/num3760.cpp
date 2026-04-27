class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st;
        int n = s.size();
        for(int i=0; i<n; i++){
            int nxt = i+1;
            while(nxt<=n){
                if(s[i] != s[nxt%n]){
                    st.insert(s[i]);
                    break;
                }
            }
        }
        return st.size();
    }
};