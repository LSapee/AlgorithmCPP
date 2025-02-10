class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='0'&&s[i]<='9'){
                if(!stk.empty())stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        string ss= "";
        while(!stk.empty()){
            ss=stk.top()+ss; stk.pop();
        }
        return ss;
    }
};