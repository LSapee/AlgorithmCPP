class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int> stk;
        stk.push(0);
        for(int i=0; i<n; i++){
            if(s[i]=='(')stk.push(0);
            else{
                int a = stk.top();stk.pop();
                int b = stk.top();stk.pop();
                stk.push(b+max(2*a,1));
            }
        }
        return stk.top();
    }
};