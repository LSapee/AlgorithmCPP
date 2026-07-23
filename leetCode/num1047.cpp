class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for(char a : s){
            if(stk.empty())stk.push(a);
            else{
                if(a==stk.top())stk.pop();
                else stk.push(a);
            }
        }
        string ans ="";
        while(!stk.empty()){
            ans+=stk.top();stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};