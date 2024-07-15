class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans =0;
        stack<char> stk;
        for(int i=0; i<columnTitle.size(); i++)stk.push(columnTitle[i]);
        int k = 26;
        ans += stk.top()-64; stk.pop();
        while(!stk.empty()){
            int num = stk.top()-64;
            stk.pop();
            ans+= k*num;
            if(!stk.empty())k = k*26;
        }
        return ans;
    }
};