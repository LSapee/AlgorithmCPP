class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        stack<char> stk;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                stk.push('(');
            }else if(s[i] == ')'){
                stk.pop();
            }
            int temp = stk.size();
            ans = max(ans,temp);
        }
        return ans;
    }
};