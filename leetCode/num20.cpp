class Solution {
public:
    bool isValid(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        stack<char> Stk;
        for(int i=0; i<s.size(); i++){
            if(s[i]==')'){
                if(!Stk.empty()&& Stk.top()=='(')Stk.pop();
                else return false;
            }else if(s[i]==']'){
                if(!Stk.empty()&& Stk.top()=='[') Stk.pop();
                else return false;
            }else if(s[i]=='}'){
                if(!Stk.empty()&& Stk.top()=='{') Stk.pop();
                else return false;
            }else{
                Stk.push(s[i]);
            }
        }
        if(Stk.size()>0) return false;
        return true;
    }
};