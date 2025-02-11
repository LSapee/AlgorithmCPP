class Solution {
public:
    bool check(stack<char> stk, string part){
        if(stk.size()<part.size())return false;
        for(int i=part.size()-1; i>=0; i--){
            if(stk.top()!=part[i])return false;
            stk.pop();
        }
        return true;
    }

    string removeOccurrences(string s, string part) {
        string ans = "";
        stack<char> stk;
        int n = part.size();
        for(int i=0; i<s.size(); i++){
            stk.push(s[i]);
            bool ok = false;
            if(stk.top()==part[n-1]){
                ok = check(stk,part);
                if(ok){
                    int k =0;
                    while(!stk.empty()){
                        k--;
                        stk.pop();
                        if(n+k==0)break;
                    }
                }
            }
        }
        while(!stk.empty()){
            ans = stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};