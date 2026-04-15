class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
        unordered_set<int> st;
        for(int i=0; i<n; i++) if(words[i] == target) st.insert(i);
        if(st.size() ==0 ) return -1;
        for(auto a : st) ans  = min(ans, min(abs(a-startIndex),n-abs(a-startIndex)));
        return ans;
    }
};