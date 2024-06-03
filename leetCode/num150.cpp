class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int num =0;
        int num2 =0;
        for(int i=0; i<tokens.size(); i++){
            string s =tokens[i];
            if(s.size()!=1){
                stk.push(stoi(s));
            }else{
                if(s[0] =='/'){
                    num = stk.top();stk.pop();
                    num2 =stk.top();stk.pop();
                    stk.push(num2/num);
                }else if(s[0]=='+'){
                    num = stk.top();stk.pop();
                    num2 =stk.top();stk.pop();
                    stk.push(num2+num);
                }else if(s[0]=='*'){
                    num = stk.top();stk.pop();
                    num2 =stk.top();stk.pop();
                    stk.push(num2*num);
                }else if(s[0]=='-'){
                    num = stk.top();stk.pop();
                    num2 =stk.top();stk.pop();
                    stk.push(num2-num);
                }else{
                    stk.push(stoi(s));
                }
            }
        }
        return stk.top();
    }
};