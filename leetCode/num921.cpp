class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans =0;
        stack<int> stk;
        for(auto cur: s){
            if(cur == '(')stk.push(0);
            else if(!stk.empty())stk.pop();
            else ans++;
        }
        return ans+stk.size();
    }
};