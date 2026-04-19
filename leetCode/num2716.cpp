class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> st;
        for(char a : s) if(st.find(a) == st.end())st.insert(a);
        return (int)st.size();
    }
};