class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int maxNum = pow(2,k);
        int n = s.size();
        set<string> st;
        for(int i=0;i<n+1-k; i++){
            string target = s.substr(i,k);
            st.insert(target);
        }
        return st.size() == maxNum;
    }
};